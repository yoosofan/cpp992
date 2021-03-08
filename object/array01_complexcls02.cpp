#include <iostream>
#include <cmath>

struct complexCls{
  double re = 0, img = 0;

  void input(void){
    std::cout << "Enter real part: ";
    std::cin >> re;
    std::cout << "Enter imaginary part: ";
    std::cin >> img;
  }

  void print(void){
    std::cout << '(' << re << ", " << img << ')' << std::endl ;
  }

  void negate(void){
    re = - re;
    img = - img;
  }

  double magnitude(void){
    return std::sqrt(re * re + img * img);
  }
};

struct myArray{
  static const int MAX = 100;
  complexCls a[MAX];
  int n;
  
  void input(void){
    do{
      std::cout << "Enter n > 0; ";
      std::cin >> n;
    } while(n <= 0 || n >= MAX);
    for( int i=0; i < n; i++){
      std::cout << "Enter a[" << i << "]: ";
      a[i].input();
    }
  }

  void print(void){
    std::cout << "n: " << n << std:: endl;
    for(int i=0; i < n; i++){
      std::cout << "a[" << i << "]:";
      a[i].print();
    }
  }
  
  complexCls sum(void){
    complexCls d = {0,0};
    for(int i=0; i < n ; i++ ){
      d.re += a[i].re;
      d.img += a[i].img;
    }
    return d;
  }
};

void test(void);

int main(){
  test();
  return 0;
}

void test(void){
  myArray a;
  a.input();
  a.print();
  complexCls d = a.sum();
  d.print();
}
