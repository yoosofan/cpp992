// Kazemi
#include <cstdio>
#include <cmath>
#include<iostream>
using namespace std;

struct point
  {
    float x;
    float y;
    int tedad;
  };
struct triangle
  {
    point arr[3];
  };

void add_point(point *,point *);
float distance_of_2(point,point);
float distance_of_1(point);
float degree(point);
void printing(point);
point movement(point,int,int);
triangle add_triangle(void);
int is_triangle(triangle);
void printing_triangle(triangle);
float p_triangle(triangle);
float a_triangle(triangle);
triangle t_movement(triangle ,int,int);
void point_program(void);
void triangle_program(void);

int main()
  {
    int select;
    cout << "wich program do you want?" << '\n'<<"1-point program\n2-triangle program\n";
    cin >> select;
    if(select==1)
    point_program();
    if(select==2)
    triangle_program();
    return 0;
  }

void add_point(point *a, point *b)
  {
    int C;
    cout <<"how many point will you enter?(1 or 2)\n";
    cin>>C;
    b->tedad=C;
    if(C==1)
      {
        cout<<"enter x of the point\n";
        cin>>b->x;
        cout<<"enter y of the point\n";
        cin>>b->y;
      }
    if(C==2)
      {
        cout<<"enter x of firts point\n";
        cin>>b->x;
        cout<<"enter y of first point\n";
        cin>>b->y;
        cout<<"enter x of second point\n";
        cin>>a->x;
        cout<<"enter y of second point\n";
        cin>>a->y;
      }
  }

float distance_of_2(point b,point a)
  {
    float distance;
    distance=sqrt(pow(a.y-b.y,2)+pow(a.x-b.x,2));
    return distance;
  }

  float distance_of_1(point a)
    {
      float distance;
      distance=sqrt(pow(0-a.y,2)+pow(0-a.x,2));
      return distance;
    }

float degree(point a)
  {
    float deg;
    deg=atan(a.y/a.x)*(180.0 / 3.14159265);
    return deg;
  }

void printing(point b)
  {
      cout<<'(' << b.x<<','<< b.y<<')';
  }

point movement(point b,int dx,int dy)
  {
    point c;
    c.x = b.x + dx;
    c.y = b.y + dy;
    return c;
  }
triangle add_triangle(void)
  {
    triangle t1;
    cout<<"please enter the first side coordinates:";
    cin>>t1.arr[0].x;
    cin>>t1.arr[0].y;
    cout<<"please enter the second side coordinates:";
    cin>>t1.arr[1].x;
    cin>>t1.arr[1].y;
    cout<<"please enter the third side coordinates:";
    cin>>t1.arr[2].x;
    cin>>t1.arr[2].y;
    if (is_triangle(t1)==1)
      return t1;
    else
      {
        cout<<"ERROR:it will not make a triangle!\n";
        t1=add_triangle();
      }
  }

int is_triangle(triangle t)
  {
    float distance1;
    float distance2;
    float distance3;
    distance1 = distance_of_2(t.arr[0],t.arr[1]);
    distance2 = distance_of_2(t.arr[0],t.arr[2]);
    distance3 = distance_of_2(t.arr[1],t.arr[2]);
    if (distance1 + distance2 > distance3)
      if(distance1 + distance3 > distance2)
        if(distance2 + distance3 > distance1)
          return 1;
    else
    return 0;
  }

void printing_triangle(triangle t)
{
  cout<<"first side:("<< t.arr[0].x<<','<< t.arr[0].y<<')'<<'\n';
  cout<<"second side:("<<t.arr[1].x<<',' <<t.arr[1].y<<')'<<'\n';
  cout<<"third side:("<<t.arr[2].x<<','<<t.arr[2].y<<')'<<'\n';
}
float p_triangle(triangle t)
{
  float distance1;
  float distance2;
  float distance3;
  distance1 = distance_of_2(t.arr[0],t.arr[1]);
  distance2 = distance_of_2(t.arr[0],t.arr[2]);
  distance3 = distance_of_2(t.arr[1],t.arr[2]);
  return (distance1 + distance2 + distance3);
}
float a_triangle(triangle t)
{
  float p = p_triangle(t)/2;
  return(sqrt(p*(p-distance_of_2(t.arr[0],t.arr[1]))*(p-distance_of_2(t.arr[0],t.arr[2]))*(p-distance_of_2(t.arr[1],t.arr[2]))));

}
triangle t_movement(triangle t,int dx,int dy)
{
  triangle v1;
  v1.arr[0] = movement(t.arr[0],dx,dy);
  v1.arr[1] = movement(t.arr[1],dx,dy);
  v1.arr[2] = movement(t.arr[2],dx,dy);
  return (v1);
}

void point_program(void)
  {
    point a,b;
    add_point(&b, &a);
    int c;
    cout<<"what are you going to do?\n";
    cout<<"1-distence from origin of coordinates\n";
    cout<<"2-distence of points\n";
    cout<<"3-degree of the point victor\n";
    cout<<"4-just print the coordinates\n";
    cout<<"5-move the point!\n";
    cin>>c;

    switch (c)
      {
        case 1:
          cout<<distance_of_1(a)<<'\n';
          break;
        case 2:
        cout<<distance_of_2(a,b)<<'\n';
          break;
        case 3:
          cout<<degree(a)<<'\n';
          break;
        case 4:
          if(a.tedad==1)
          printing(a);
          if(a.tedad==2)
            {
              printing(a);
              printing(b);
            }

          break;
        case 5:
          int dx,dy;
          cout<<"please enter dx:";
          cin>>dx;
          cout<<"please enter dy:";
          cin>>dy;
            {
              point A=movement(a,dx,dy);
              printing(A);
            }
        }
      }
void triangle_program(void)
  {
      triangle t1;
      t1=add_triangle();
      int k;
      cout<<"what do you want to do?\n";
      cout<<"1-print the triangle.\n";
      cout<<"2-print the triangle's perimeter.\n";
      cout<<"3-print the triangle's area.\n";
      cout<<"4-move your triangle!\n";
      cin>>k;
      switch (k)
        {
          case 1:
            printing_triangle(t1);
            break;
          case 2:
            {
              float perimeter = p_triangle(t1);
              cout<<perimeter<<'\n';
            }
            break;
          case 3:
            {
              float area = a_triangle(t1);
              cout<<area<<'\n';
            }
            break;
          case 4:
            {
              triangle v2;
              int Dx,Dy;
              cout<<"enter the dx:";
              cin>>Dx;
              cout<<"enter the dy:";
              cin>>Dy;
              v2 = t_movement(t1, Dx, Dy);
              printing_triangle(v2);
            }
            break;
        }
      }
