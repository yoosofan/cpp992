#include <iostream>
#include <cmath>
using namespace std;

struct complexCls{
  double re, img;
}

complexCls input(void);
void print(complexCls);
complexCls negate(complexCls);
double magnitude(complexCls);

void test(void);

int main(){
  test();
  return 0;
}

complexCls input(void){
  complexCls a;
  cout << "Enter real part: ";
  cin >> a.re;
  cout << "Enter imaginary part: ";
  cin >> a.img;
  return a;
}

void print(complexCls a){
  cout << '(' << a.re << ", " << a.img << ')' << endl;
}

complexCls negate(complexCls a){
  a.re = - a.re;
  a.img = - a.img;
  return a;
}

double magnitude(complexCls a){
  return sqrt(a.re * a.re + a.img * a.img);
}
