#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
struct coordinate
{
    float x;
    float y;
};
struct triangle
{
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
};
struct side
{
    float a;
    float b;
    float c;
};
struct coordinate getcordnt(void);
void distcenter(struct coordinate newcor);
void dist_two_cor(struct coordinate newcor,struct coordinate newcor2);
void degcor(struct coordinate newcor);
void showcor(struct coordinate newcor);
void chngcor(struct coordinate *ptrcor);
//------------------Triangle functions---------------------------------
struct triangle gettri(void);
void showtri(struct triangle tri);
struct side sidetri(struct triangle tri);
void mohittri(struct side sd);
void areatri(struct side sd);
void changetri(struct triangle *ptrtri);
int main()
{
//    struct coordinate newcor;
//    struct coordinate *ptrcor;
//    ptrcor=&newcor;
//    struct coordinate newcor2;
//    newcor=getcordnt();
//    showcor(newcor);
//    distcenter(newcor);
//    degcor(newcor);
//    chngcor(ptrcor);
//-------------------------------------------------------
//    printf("Now for the second coordinate :\n");
//    ptrcor=&newcor2;
//    newcor2=getcordnt();
//    showcor(newcor2);
//    distcenter(newcor2);
//    degcor(newcor2);
//    chngcor(ptrcor);
//    dist_two_cor(newcor,newcor2);
//-------------------Triangle codes----------------------------
    struct triangle tri;
    struct side sd;
    tri=gettri();
    sd=sidetri(tri);
    showtri(tri);
    mohittri(sd);
    areatri(sd);
    struct triangle *ptrtri;
    ptrtri=&tri;
    changetri(ptrtri);
    showtri(tri);
    return 0;
}
struct coordinate getcordnt(void)
{
    struct coordinate newcor;
    cout<<"Please enter x Coordinate:\n";
    cin>>newcor.x;
    cout<<"Please enter y Coordinate:\n";
    cin>>newcor.y;
    return newcor;

}
void distcenter(struct coordinate newcor)
{
  float sum;
  float res;
  newcor.x=newcor.x*newcor.x;
  newcor.y=newcor.y*newcor.y;
  sum=newcor.x+newcor.y;
  res=sqrt(sum);
  cout<<"#The distance between this coordinate and the center="<<res<<"\n";
}
void dist_two_cor(struct coordinate newcor,struct coordinate newcor2)
{
   float sum;
   float res;
   newcor.x=newcor.x-newcor2.x;
   newcor.y=newcor.y-newcor2.y;
   newcor.x=newcor.x*newcor.x;
   newcor.y=newcor.y*newcor.y;
   sum=newcor.y+newcor.x;
   res=sqrt(sum);
   cout<<"#The distance between these 2 coordiantes is :"<<res<<"\n";
}
void degcor(struct coordinate newcor)
{
    float temp;
    float res;
    float degres;
    temp=newcor.y/newcor.x;
    res=atan(temp);
    cout<<"#The degree this coordinate creates on Axis x = "<<res<<" radian\n";
    degres=(res*180)/3.14;
    cout<<"#That equals to ="<<degres<<" degree\n";
}
void showcor(struct coordinate newcor)
{
    cout<<"---------------------------\n";
    printf("(%.1f,%.1f)\n",newcor.x,newcor.y);
}
void chngcor(struct coordinate *ptrcor)
{
    float dx;
    float dy;
    cout<<"In order to change the coordinate :\n";
    cout<<"Enter dx :\n";
    cin>>dx;
    cout<<"Enter dy :\n";
    cin>>dy;
    (*ptrcor).x=(*ptrcor).x+dx;
    (*ptrcor).y=(*ptrcor).y+dy;
}
//-------------------Triangle functions----------------------------
struct triangle gettri(void)
{
     struct triangle tri;
     float shib;
     cout<<"Enter x1\n";
     cin>>tri.x1;
     cout<<"Enter y1\n";
     cin>>tri.y1;
     cout<<"Enter x2\n";
     cin>>tri.x2;
     cout<<"Enter y2\n";
     cin>>tri.y2;
     cout<<"Enter x3\n";
     cin>>tri.x3;
     cout<<"Enter y3\n";
     cin>>tri.y3;
     shib=(tri.y2-tri.y1)/(tri.x2-tri.x1);

     while((tri.y3-tri.y1)==shib(tri.x3-tri.x1))
     {
     cout<<"This is not a triangle.\n";
     cout<<"Enter x1\n";
     cin>>tri.x1;
     cout<<"Enter y1\n";
     cin>>tri.y1;
     cout<<"Enter x2\n";
     cin>>tri.x2;
     cout<<"Enter y2\n";
     cin>>tri.y2;
     cout<<"Enter x3\n";
     cin>>tri.x3;
     cout<<"Enter y3\n";
     cin>>tri.y3;
     sd=sidetri(tri);
     }


     return tri;
}
void showtri(struct triangle tri)
{
     cout<<"---------------------------\n";
     cout<<"1: ("<<tri.x1<<","<<tri.y1<<")\t";
     cout<<"2: ("<<tri.x2<<","<<tri.y2<<")\t";
     cout<<"3: ("<<tri.x3<<","<<tri.y3<<")\t";
}
void mohittri(struct side sd)
{
    int sum;
    sum=sd.a+sd.b+sd.c;
    cout<<"mohit="<<sum<<"\n";
}
void areatri(struct side sd)
{
    int sum;
    float res;
    sum=sd.a+sd.b+sd.c;
    sum=sum/2;
    res=sqrt(sum*(sum-sd.a)*(sum-sd.b)*(sum-sd.c));
    cout<<"area ="<<res<<"\n";
}
struct side sidetri(struct triangle tri)
{
   struct side sd;
   int temp1;
   int temp2;
   int temp3;
   int temp4;
   int temp5;
   int temp6;
   temp1=tri.x1-tri.x2;
   temp1=temp1*temp1;
   temp2=tri.y1-tri.y2;
   temp2=temp2*temp2;
   sd.a=sqrt(temp1+temp2);
   temp3=tri.x1-tri.x3;
   temp3=temp3*temp3;
   temp4=tri.y1-tri.y3;
   temp4=temp4*temp4;
   sd.b=sqrt(temp4+temp3);
   temp5=tri.x2-tri.x3;
   temp5=temp5*temp5;
   temp6=tri.y2-tri.y3;
   temp6=temp6*temp6;
   sd.c=sqrt(temp5+temp6);
   return sd;
}
void changetri(struct triangle *ptrtri)
{
    int dx;
    int dy;
    cout<<"In order to change triangles coordinates :\n";
    cout<<"Enter dx :\n";
    cin>>dx;
    cout<<"Enter dy :\n";
    cin>>dy;
    (*ptrtri).x1=(*ptrtri).x1+dx;
    (*ptrtri).y1=(*ptrtri).y1+dy;
    (*ptrtri).x2=(*ptrtri).x2+dx;
    (*ptrtri).y2=(*ptrtri).y2+dy;
    (*ptrtri).x3=(*ptrtri).x3+dx;
    (*ptrtri).y3=(*ptrtri).y3+dy;

}
