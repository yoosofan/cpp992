#include<iostream>
using namespace std;

class Shape{
  string name;// char name[100]; '\0' رشته
  string color;// strcpy, strcmp; char*color; str1=str2
 public:
  int Area(void){return 0;}
  void f1(void){cout << "f1" << endl;}
};

class Square: public Shape{
  int d;
public:
  Square(int d=1){
    this->d = d;
  }
  int Area(void){
    return d*d;
  }

};
int main(){
  Shape s;
  cout<< s.Area() << endl;
  Square sq(3);
  cout<< sq.Area() << endl;
  sq.f1();
  return 0;
}
