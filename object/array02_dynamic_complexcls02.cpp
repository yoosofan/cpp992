#include <iostream>
#include <cmath>

struct complexCls{
  double re, img;

  complexCls(double r = 0, double i = 0){
    re = r;
    img = i;
  }

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
  complexCls *a;
  int n;
  
  myArray(){
    n = 0;
    a = nullptr;
  }
  
  ~myArray(){
    std::cout << "myArray Destructor" << std::endl;
    std::cout << "n: " << n << std::endl;
    if(n > 0 )
      delete[] a;
    n = 0;
    a = nullptr;
  }
      
  void input(void){
    do{
      std::cout << "Enter n > 0; ";
      std::cin >> n;
    } while(n <= 0);
    a = new complexCls[n];   
    for( int i=0; i < n; i++){
      std::cout << "Enter a[" << i << "]: ";
      a[i].input();
    }
  }
  
  void testInput(void){
    static int m = 100;
    m++;
    a = new complexCls[n = m];
    for(int i=0; i < n; i++){
      a[i].re = m+1;
      a[i].img = m+1;
    }
  }
  
  void remove(void){
    if( n > 0)
      delete[] a;
    n = 0;
    a = nullptr;
  }

  void print(void){
    std::cout << "n: " << n << std::endl;
    for(int i = 0; i < n; i++){
      std::cout << "a[" << i << "]:";
      a[i].print();
    }
  }
  
  complexCls sum(void){
    complexCls d;
    for(int i = 0; i < n ; i++ ){
      d.re += a[i].re;
      d.img += a[i].img;
    }
    return d;
  }
};

void test(void);

int main(){
  for(int i = 0 ; i < 100 ; i++)
    test();
  return 0;
}

void test(void){
  myArray a;
  a.testInput();
  a.print();
  complexCls d = a.sum();
  d.print();
  //a.remove();
}
