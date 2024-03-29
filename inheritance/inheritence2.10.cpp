#include<iostream>
using namespace std;

class A{};

class Shape: public A{
protected:
  string name;
  string color;
public:
  int Area(void){
    cout << "in Shape" << endl;
    return 0;
  }

  void show(void){
    cout << "show in shape" << endl;
  }
};

class Square: public Shape{
  int d;
public:
  int Area(void){
    cout << "in Square" << endl;
    return d*d;
  }

  Square(int d=1){this->d=d;}
};

class drive1: public Square{
  public:
  void f(Shape a){
    cout << a.Area() << endl;
    a.show();
  }
  
  drive1(int d=1):Square(d){}

};

void f1(Shape a){
  cout << a.Area() << endl;
  a.show();
}
void f2(Square s1){
  cout << s1.Area() << endl;
}

int main(){
  Shape s;
  f1(s);
  // f2(s);
  // f2((Square)s); // c explicit conversion
  f2(Square(s));
  Square sq(3); 
  f1(sq);
  drive1 d1; 
  d1.f(sq);
  //cout<<sq.Area()<<endl;
  Shape* ps = &s; 
  cout << ps->Area() << endl;
  //ps=&sq; cout<<ps->Area()<<endl;
  return 0;
}
