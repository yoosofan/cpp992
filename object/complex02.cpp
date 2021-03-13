#include <iostream>
#include <cmath>
// using namespace std;

struct complexCls{
  double re = 0, img = 0;

  complexCls(){
    re = 0;
    img = 0;
  }
  complexCls(double r){
    
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
  complexCls b = {1, 4};
  b.print();
  b.input();
  std::cout << b.magnitude() << std::endl;
  b.print();
  b.negate();
  b.print();
  
  complexCls a;
  a.print();
  a.input();
  a.print();
  double d = a.magnitude();
  std::cout << d << std::endl;
}
