#include<iostream>
using namespace std;

class A{};

class Shape: public A{
protected:
  string name = "Shape";
  string color = "white";
public:
  int Area(void){return 0;}
};

class Square: public Shape{
  int d;
public:
  int Area(void){return d*d;}
  Square(int d=1){this->d=d;}
  void print_name(void){
    cout << name << endl;
  }
};

int main(){
  Shape s;
  cout<<s.Area()<<endl;
  Square sq(3);
  cout<<sq.Area()<<endl;
  Shape *ps=&s; 
  cout<<ps->Area()<<endl;
  ps=&sq; 
  cout<<ps->Area()<<endl;
  sq.print_name();
  // cout << s.name << endl;
  A *pa;
  return 0;
}
