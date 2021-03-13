#include <iostream>
#include <cmath>
// using namespace std;

struct complexCls{
  double re, img;

  complexCls(double r = 0, double i = 0){
    re = r;
    img = i;
  }

  ~complexCls(){
    std::cout << "destructor complexCls (" << re << ", " << img << ")" << std::endl;
  }

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
  
  void increment(void){
    re++;
    img++;
  }
  
};

void test(void);

int main(){
  for(int i = 0; i < 3; i++)
    test();
  return 0;
}

void test(void){  
  /*  static int myStaticCheckVar = 0;  myStaticCheckVar++;  std::cout << "myStaticCheckVar: " << myStaticCheckVar << std::endl;  myStaticCheckVar = 0 ; // Assignment  */
  complexCls b(1, 4);
  b.print();
  static complexCls stmn(7,9);
  std::cout << "stmn: " << std::endl;
  stmn.print();
  stmn.increment();
  //b.input();  //std::cout << b.magnitude() << std::endl;  //b.print();  //b.negate();  //b.print();
  
  bool b1 = true;
  if(b1 == true){  // if(b1)
    complexCls a;
    a.print();    // a.input();    //a.print();    //double d = a.magnitude();    //std::cout << d << std::endl;
  }
  else{
    complexCls c(2);    //c.input();
    c.print();
  }
  std::cout << "Before end of test function" << std::endl;
}
