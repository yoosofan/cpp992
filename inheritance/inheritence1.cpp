#include<iostream>
using namespace std;
class Shape{
  string name;// char name[100]; '\0' رشته
  string color;// strcpy, strcmp; char*color; str1=str2
public:
  int Area(void){return 0;}
};
class Square: public Shape{
  int d;
public:
  int Area(void){return d*d;}
  Square(int d=1){this->d=d;}
};
int main(){
  Shape s;
  cout<< s.Area() << endl;
  Square sq(3);
  cout<< sq.Area() << endl;
  return 0;
}
