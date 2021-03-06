// بوغنیمه 

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

const float PI = 3.14159265;

struct point
{
    float x;
    float y;
};
struct triangle
{
    point a;
    point b;
    point c;
};

void mainmenu(void);
void pointmenu(void);
void trianmenu(void);
point getpoint(void);
void dtocenter(void);
void dtwopoints(void);
void angle(void);
void showpoint(float ,float );
point movepoint(int ,int ,point );
triangle gettriangle(void);
triangle poftrian(triangle);
float perimeter(triangle);
float area(triangle);
triangle movetrian(int ,int ,triangle);

int main()
{
    cout << "....................................Welcome.........................................\n";
    mainmenu();
}
void mainmenu()
{
    int choice;
    do
    {
      cout << "1.Point\n";
      cout << "2.Triangle\n";
      cout << "3.Exit\n";
      cout << "\nWhich one do you choose?\n";
      cin >> choice;
      switch(choice)
      {
        case 1:
            pointmenu();
            break;
        case 2:
            trianmenu();
            break;
        case 3:
            // exit(0);
            break;
        default:
            printf("Invalid input...\nPlease try again...\n");
            break;
      }
    }while(choice !=3);
}
void pointmenu(void)
{
    int choice;
    do
    {
        cout << "1.Distance from Center\n";
        cout << "2.Distance between two Points\n";
        cout << "3.Angle\n";
        cout << "4.Move Point\n";
        cout << "5.Back\n";
        cout << "\nWhich one do you choose?\n";
        cin >> choice;
        point p;
        switch(choice)
        {
            case 1:
                dtocenter();
                break;
            case 2:
                dtwopoints();
                break;
            case 3:
                angle();
                break;
            case 4:
                p={0,0};
                p=movepoint(0,0,p);
                printf("(%.2f,%.2f)\n", p.x,p.y);
                break;
            case 5:
                mainmenu();
                break;
            default:
                cout << "Invalid input...\nPlease try again...\n";
                break;
        }
    }while(choice !=5);
}

void trianmenu()
{
    int choice;
    do
    {
        cout << "1.Triangle\n";
        cout << "2.Points\n";
        cout << "3.Perimeter\n";
        cout << "4.Area\n";
        cout << "5.Move\n";
        cout << "6.Back\n";
        cout << "Which one do you choose?\n";
        cin >> choice;
        triangle t;
        float result;
        switch(choice)
        {
        case 1:
            t=gettriangle();
            printf("The points of triangle are:\n(%.2f,%.2f)\t(%.2f,%.2f)\t(%.2f,%.2f)\n", t.a.x, t.a.y, t.b.x, t.b.y, t.c.x, t.c.y);
            break;
        case 2:
            poftrian(t);
            printf("The points of triangle are:\n(%.2f,%.2f)\t(%.2f,%.2f)\t(%.2f,%.2f)\n", t.a.x, t.a.y, t.b.x, t.b.y, t.c.x, t.c.y);
            break;
        case 3:
            result=perimeter(t);
            cout <<"Perimeter is: " << result << "\n";
            break;
        case 4:
            result=area(t);
            cout <<"Area is: " << result << "\n";
            break;
        case 5:
            t=movetrian(0,0,t);
            printf("The points of triangle are:\n(%.2f,%.2f)\t(%.2f,%.2f)\t(%.2f,%.2f)\n", t.a.x, t.a.y, t.b.x, t.b.y, t.c.x, t.c.y);
            break;
        case 6:
            mainmenu();
            break;
        default:
            cout << "Invalid input...\nPlease try again...\n";
            break;
        }
    }while(choice !=6);
}

point getpoint(void)
{
    point p;
    cout << "Enter the coordinates of the Point" << endl;
    cout << "Enter x:";
    cin >> p.x;
    cout << "Enter Y: ";
    cin >> p.y;
    return p;
}

void showpoint(float x,float y)
{
    //printf("(%.2f,%.2f)\n", x, y);
    cout << '(' << x << ", " << y << ')' << endl;
}

void dtocenter(void)
{
    point p=getpoint();
    float temp=(( (p.x)*(p.x) )+( (p.y)*(p.y) ));
    float result=sqrt(temp);
    showpoint(p.x,p.y);
    cout << result << "\n";
}

void dtwopoints(void)
{
    point p[2];
   for(int i=0; i<2; i++)
   {
        p[i]=getpoint();
        showpoint(p[i].x,p[i].y);
   }
   float temp=(( ( (p[0].x)-(p[1].x) )*( (p[0].x)-(p[1].x) ))+( ( (p[0].y)-(p[1].y) )*( (p[0].y)-(p[1].y) ) ));
   float result=sqrt(temp);
   cout << result << "\n";
}
void angle(void)
{
    point p=getpoint();
    float result;
    float temp=(( (p.y) )/( (p.x) ));
    showpoint(p.x,p.y);
    result=atan(temp);
    result=(result*180.0)/PI;
    if((p.x) !=0 && (p.x)>0)
    {
        cout << "Angle is:" << result << "\n";
    }
    else if((p.x)<0)
    {
        result=result + 180;
        cout << "Angle is:" << result << "\n";
    }
    else
    {
        cout << "Angle is 90\n";
    }

}
point movepoint(int dx,int dy,point p)
{
    p=getpoint();
    printf("Enter the number you want to add to x coordinate:\n");
    cin >> dx;
    printf("Enter the number you want to add to y coordinate:\n");
    cin >> dy;
    p.x=(p.x)+dx;
    p.y=(p.y)+dy;
    return p;
}
float side(point p1,point p2)
{
    float temp=(( ( (p1.x)-(p2.x) )*( (p1.x)-(p2.x) ))+( ( (p1.y)-(p2.y) )*( (p1.y)-(p2.y) ) ));
    float result=sqrt(temp);
    return result;
}
triangle gettriangle(void)
{
    float a,b,c;
    triangle t;
    do
    {
        t.a=getpoint();
        t.b=getpoint();
        t.c=getpoint();
        a=side(t.a,t.b);
        b=side(t.b,t.c);
        c=side(t.a,t.c);
    }while(!(a+b>c && b+c>a && a+c>b));
    return t;
}
triangle poftrian(triangle t)
{
    t=gettriangle();
    return t;
}

float perimeter(triangle t)
{
    float a,b,c;
    t=gettriangle();
    a=side(t.a,t.b);
    cout <<"The side is: " << a << "\n";
    b=side(t.b,t.c);
    cout <<"The side is: " << b << "\n";
    c=side(t.a,t.c);
    cout <<"The side is: " << c << "\n";
    float result=a+b+c;
    return result;
}
float area(triangle t)
{
    float a,b,c,p,temp,result;
    t=gettriangle();
    a=side(t.a,t.b);
    cout <<"The side is: " << a << "\n";
    b=side(t.b,t.c);
    cout <<"The side is: " << b << "\n";
    c=side(t.a,t.c);
    cout <<"The side is: " << c << "\n";
    p=(a+b+c)/2;
    temp=p*(p-a)*(p-b)*(p-c);
    result=sqrt(temp);
    return result;
}
triangle movetrian(int dx,int dy,triangle t)
{
    t=gettriangle();
    cout << "Enter the number you want to move the triangle along x axis:\n";
    cin >> dx;
    cout << "Enter the number you want to move the triangle along y axis:\n";
    cin >> dy;
    t.a.x=t.a.x+dx;
    t.b.x=t.b.x+dx;
    t.c.x=t.c.x+dx;

    t.a.y=t.a.y+dy;
    t.b.y=t.b.y+dy;
    t.c.y=t.c.y+dy;
    return t;
}



