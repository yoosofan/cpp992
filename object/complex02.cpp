#include <iostream>
#include <cmath>
// using namespace std;

struct complexCls{
  double re, img;
  void input(void){
    std::cout << "Enter real part: ";
    std::cin >> re;
    std::cout << "Enter imaginary part: ";
    std::cin >> img;
  }

  void print(void){
    std::cout << '(' << re << ", " << img << ')' << std::endl;
  }

  void negate(void){
    re = - re;
    img = - img;
  }

  double magnitude(void){
    return std::sqrt(re * re + img * img);
  }
};

void test(void);

int main(){
  test();
  return 0;
}

void test(void){
  complexCls b;
  b.input();
  std::cout << b.magnitude() << std::endl;
  b.print();
  b.negate();
  b.print();
}
