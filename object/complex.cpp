#include <iostream>
#include <cmath>
// using namespace std;

struct complexCls{
  double re, img;
};

complexCls input(void);
void print(complexCls);
complexCls negate(complexCls);
double magnitude(complexCls);

void test(void);

int main(){
  test();
  return 0;
}

void test(void){
  complexCls b;
  b = input();
  std::cout << magnitude(b) << std::endl;
  print(b);
  print(negate(b));
}
complexCls input(void){
  complexCls a;
  std::cout << "Enter real part: ";
  std::cin >> a.re;
  std::cout << "Enter imaginary part: ";
  std::cin >> a.img;
  return a;
}

void print(complexCls a){
  std::cout << '(' << a.re << ", " << a.img << ')' << std::endl;
}

complexCls negate(complexCls a){
  a.re = - a.re;
  a.img = - a.img;
  return a;
}

double magnitude(complexCls a){
  return sqrt(a.re * a.re + a.img * a.img);
}
