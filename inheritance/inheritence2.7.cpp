#include<iostream>
using namespace std;
class A{};
class Shape: public A{
protected:
  string name;
  string color;
public:
  int Area(void){cout<<"in Shape"<<endl;return 0;}
  void show(void){cout<<"show in shape"<<endl;}
};
class Square: private Shape{
  int d;
public:
  int Area(void){cout<<"in Square"<<endl;return d*d;}
  Square(int d=1){this->d=d;}
};
void f1(Shape a){cout<<a.Area()<<endl;a.show();}
int main(){
  Shape s;  f1(s);
  //Square sq(3);  f1(sq);
  //cout<<sq.Area()<<endl;
  Shape *ps=&s; cout<<ps->Area()<<endl;
  //ps=&sq; cout<<ps->Area()<<endl;
  A *pa;
  return 0;
}
