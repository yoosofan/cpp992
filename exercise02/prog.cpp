// شاهپوری

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

struct pointt
{
    float x;
    float y;
};

struct mosalas
{
    pointt a;
    pointt b;
    pointt c;
};

void menu(void);
pointt add(void);
mosalas addm(void);
void seem(mosalas t1);
void  see(pointt adress);
float Dbetween( pointt n1, pointt n2);
float perimeter(mosalas m1);
float area(mosalas m1);
pointt movep(pointt p1, int dx, int dy);
mosalas movem(mosalas t1, int dx, int dy);

int main()
{
 menu();
 return 0;
}

void menu(void)
{
    int x= 1;
    while(x)
    {
        mosalas xyz;
        cout<<"\nEnter number"<<endl;

        cout<<"(1)Add a triangle"<<endl;
        cout<<"(2)see the triangle"<<endl;
        cout<<"(3)See perimeter of the triangle"<<endl;
        cout<<"(4)See area of the triangle"<<endl;
        cout<<"(5)move the triangle"<<endl;

        int num;
        cin>> num;
        if(num==1)
        {
           xyz= addm();
           cout<< "The tringle created.\n";
        }
        else if(num==2)
        {
           seem(xyz);
        }
        else if(num==3)
        {
           cout<<"The perimeter of the triangle : "<<perimeter(xyz)<<endl;
        }
        else if(num==4)
        {
           cout<<"The area of the triangle : "<<area(xyz)<<endl;
        }
        else if(num==5)
        {
           int dx,dy;
           cout<<"\nenter dx :";
           cin>> dx;
           cout<<"\nenter dy :";
           cin>> dy;
           xyz=movem(xyz, dx, dy);
        }
        else
        {
           cout<<"\nplease enter correct number"<<endl;

        }
    }
}

pointt add(void)
{
    pointt p1;
    cout<<"Enter x:";
    cin>>p1.x;
    cout<<"Enter y:";
    cin>>p1.y;
    return p1;
}

mosalas addm(void)
{

    float A,B,C;
    mosalas m1;
    m1.a=add();
    cout<<"\n";
    m1.b=add();
    cout<<"\n";
    m1.c=add();
    cout<<"\n";
    A=Dbetween(m1.c, m1.b);
    B=Dbetween(m1.c, m1.a);
    C=Dbetween(m1.a, m1.b);
    if(A+B>C&&A+C>B&&B+C>A)
    {

        return m1;
    }
    else
    {
        cout<< "These points aren't creat a triangle\n";
        addm();
    }
}

void seem(mosalas t1)
{
    cout<<"\nPoint a:\n";
    see(t1.a);
    cout<<"\n\nPoint b:\n";
    see(t1.b);
    cout<<"\n\nPoint c:\n";
    see(t1.c);
    cout<< endl;
    return;
}

void  see(pointt m1)
{
    cout<<"\n x of point : "<< m1.x;
    cout<<"\n y of point : "<< m1.y;
    return;
}

float Dbetween( pointt n1, pointt n2)
{
   float i;
   float j;
   float k;

   i=pow((n1.x)-(n2.x),2);
   j=pow((n1.y)-(n2.y),2);
   k=sqrt(i+j);
   return k;
}

float perimeter(mosalas m1)
{
    float A,B,C,D;
    A=Dbetween(m1.c, m1.b);
    B=Dbetween(m1.c, m1.a);
    C=Dbetween(m1.a, m1.b);
    D=A+B+C;
    return D;
}

float area(mosalas m1)
{
   float A,B,C,D;
   float p=(perimeter(m1)/2);
   A=Dbetween(m1.c, m1.b);
   B=Dbetween(m1.c, m1.a);
   C=Dbetween(m1.a, m1.b);
   D=sqrt(p*(p-A)*(p-B)*(p-C));
   return D;
}

pointt movep(pointt p1, int dx, int dy)
{
    p1.x= p1.x+dx;
    p1.y= p1.y+dy;
    return p1;
}

mosalas movem(mosalas t1, int dx, int dy)
{
    t1.a= movep(t1.a, dx, dy);
    t1.b= movep(t1.b, dx, dy);
    t1.c= movep(t1.c, dx, dy);
    seem(t1);
    return t1;
}
