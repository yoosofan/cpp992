#include <iostream>
#include <cmath>
// using namespace std;

struct Array{
  static const int MAX = 100;
  int a[MAX]
  int n;
  
  void input(void){
    do{
      std::cout << "Enter n > 0; ";
      std::cin >> n;
    } while(n <= 0)
    for( int i=0; i < n; i++){
      std::cout << "Enter a[" << i << "]: ";
      std::cin >> a[i];
    }
  }

  void print(void){
    std::cout << "n: " << n << std:: endl;
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
  
  complexCls a;
  a.print();
  a.input();
  a.print();
  double d = a.magnitude();
  std::cout << d << std::endl;
}
