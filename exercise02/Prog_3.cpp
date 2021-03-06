// رضایی

#include <cstring>
#include <cstdio>
#include <math.h>
#include <iostream>

using namespace std;

struct Point
{
    int x ;
    int y ;
};

struct Triangle
{
  struct Point a;
  struct Point b;
  struct Point c;
};

double Center_distance(struct Point point);
double Get_the_angle(struct Point point);
double Point_distance(struct Point point_1 , struct Point point_2);

struct Point input_valuable (struct Point input);
void Menu(struct Triangle triangle);

struct Triangle Triangle_Builder(void);
void Show_Triangle (struct Triangle triangle);
double Environment (struct Triangle triangle);
double Area (struct Triangle triangle);
struct Triangle Moving_triangle(int dx , int dy , struct Triangle triangle);


int main()
{
  struct Triangle triangle;

  Menu(triangle);

  return 0;
}


void Menu(struct Triangle triangle)
{
  int input;

  cout << "Build Triangle\n";
  triangle = Triangle_Builder();

  while (1)
  {
    input = 0;

    cout << "1 - Show Triangle\n";
    cout << "2 - Environment Triangle\n";
    cout << "3 - Area Triangle\n";
    cout << "4 - Moving Triangle\n";
    cout << "5 - Exit\n\n";

    cout << "input : ";
    cin >> input;

    switch (input)
    {
        case 1:
          Show_Triangle(triangle);
          break;

        case 2:
          cout << "\nEnvironment = " << Environment(triangle) << "\n\n";
          break;

        case 3:
          cout << "Area = " << Area(triangle) << "\n\n";
          break;

        case 4:
          int dx;
          int dy;

          cout << "dx = ";
          cin >> dx;
          cout << "dy = ";
          cin >> dy;

          triangle = Moving_triangle(dx , dy , triangle);
          cout << "moving successful.";

          Show_Triangle(triangle);
          break;

        case 5:
            return;

        default:
            cout << "\ninput is wrong !!   try again.\n";
            break;
    }
  }
}

double Point_distance(struct Point point_1 , struct Point point_2)
{
  return sqrt(pow( point_1.x - point_2.x , 2) + pow(point_1.y - point_2.y , 2));

}

struct Point input_valuable (struct Point input)
{
  cout << "input point (x) = ";
  cin >> input.x ;

  cout << "input point (y) = ";
  cin >> input.y ;

  cout << "\n";

  return input;
}

struct Point Moving_point(int dx , int dy , struct Point point)
{
  point.x += dx;
  point.y += dy;
  return point;
}

struct Triangle Triangle_Builder(void)
{
  struct Triangle triangle;
  int a = 0;
  int b = 0;
  int c = 0;

  while (1)
  {
    cout << "\nCoordinates a\n" ;
    triangle.a = input_valuable (triangle.a);

    cout << "Coordinates b\n" ;
    triangle.b = input_valuable (triangle.b);

    cout << "Coordinates c\n" ;
    triangle.c = input_valuable (triangle.c);

    a = Point_distance(triangle.b , triangle.c);
    b = Point_distance(triangle.a , triangle.c);
    c = Point_distance(triangle.a , triangle.b);

    if (a < b + c && b < a + c && c < a + b )
    {
      cout << "Build the triangle was successful.\n\n";
      break;
    }
    else
      cout << "Build failed.\ttry again.\n";
  }

  return triangle;
}

void Show_Triangle (struct Triangle triangle)
{
  cout << "\na ( " << triangle.a.x << " , " << triangle.a.y << " )\n";
  cout << "b ( " << triangle.b.x << " , " << triangle.b.y << " )\n";
  cout << "c ( " << triangle.c.x << " , " << triangle.c.y << " )\n\n";
}

double Environment (struct Triangle triangle)
{
  int a = 0;
  int b = 0;
  int c = 0;

  a = Point_distance(triangle.b , triangle.c);
  b = Point_distance(triangle.a , triangle.c);
  c = Point_distance(triangle.a , triangle.b);

  return a + b + c ;
}

double Area (struct Triangle triangle)
{
  int s = 0;

  int a = 0;
  int b = 0;
  int c = 0;

  a = Point_distance(triangle.b , triangle.c);
  b = Point_distance(triangle.a , triangle.c);
  c = Point_distance(triangle.a , triangle.b);

  s = (a + b + c) / 2;
  return sqrtl(s * (s - a) * (s - b) * (s - c));
}

struct Triangle Moving_triangle(int dx , int dy , struct Triangle triangle)
{
  triangle.a.x += dx;
  triangle.b.x += dx;
  triangle.c.x += dx;

  triangle.a.y += dy;
  triangle.b.y += dy;
  triangle.c.y += dy;

  return triangle;
}



