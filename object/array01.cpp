#include <iostream>
#include <cmath>

struct myArray{
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
  std::cout << a.sum() << endl;
}
