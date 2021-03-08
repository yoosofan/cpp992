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
      std::cin >> a[i];
    }
  }

  void print(void){
    std::cout << "n: " << n << std:: endl;
    for(int i=0; i < n; i++)
      std::cout << "a[" << i << "]:" << a[i] << std::endl;
  }
  
  int sum(void){
    int d = 0;
    for(int i=0; i < n ; i++ ) 
      d += a[i];
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
  std::cout << a.sum() << std::endl;
}
