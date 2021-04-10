#include <iostream>
#include <cmath>

class complexCls{
  double re, img;

  public:
  complexCls(double r = 0, double i = 0){
    re = r;
    img = i;
    // std::cout << "in compleCls constructor";
    // std::cout << "re= " << re << "\t img= " << img << std::endl;
  }

  ~complexCls(){
    // std::cout << "complexCls destructor" << std::endl;
  }

  void addMe(complexCls a){
    re += a.re;
    img += a.img;
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

class myArray{
  complexCls *a; // double* a;
  int n;
  
  void copy(const myArray& k){
    a = new complexCls[n = k.n];
    for(int i = 0 ; i < n; i++)
      a[i] = k.a[i];
  }

  public:
  myArray(){
    n = 0;
    a = nullptr;
    std::cout << "myArray constructor" << std::endl;
  }

  myArray(const myArray& k){
    copy(k);
    std::cout << "copy constructor" << std::endl;
  }

  myArray& operator=(const myArray& k){
    delete[] a;
    copy(k);
    std::cout << "operator=" << std::endl;
    return *this;
  }

  ~myArray(){ //destructor
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
    static int m = 6;
    m++;
    a = new complexCls[n = m];
    for(int i=0; i < n; i++)
      a[i] = complexCls(i+1, i-1);
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

  complexCls getIndex(int index){
    if(index < n) return a[index];
    std::cout << "Error out of array" << std::endl;
    return complexCls(-1,-1);
  }

  bool setIndex(int index, complexCls b){
    bool result = false;
    if(index < n){
      a[index] = b;
      result = true;
    }
    else
      std::cout << "out of array" << std::endl;
    return result;
  }
  
  complexCls sum(void){
    complexCls d;
    for(int i = 0; i < n ; i++ )
      d.addMe(a[i]);
    return d;
  }
};

void test(void);
void testPointer(void);

int main(){
  //for(int i = 0 ; i < 100 ; i++) testPointer();
  test();
  return 0;
}

void testPointer(void){
  int i = 0;
  double* m1 = nullptr;
  m1 = new double[10];
  for(i = 0 ; i < 10 ; i++) 
    m1[i]=i*i;
  double* m2 = m1;
  for(i = 0;  i < 10; i++)
    std::cout << m2[i] << std::endl;
  double k1[10] = {1, 2, 3}, k2[10] = {1, 3, 3};
  // k1 = k2;
  m1 = k1;
  std:: cout << "m1 " << std::endl;
  for(i = 0;  i < 10; i++)
    std::cout << m1[i] << std::endl;

  std:: cout << "m2 " << std::endl;
  for(i = 0;  i < 10; i++)
    std::cout << m2[i] << std::endl;
  // delete[] m1;
  delete[] m2;
  m2 = nullptr;
}
void test(void){
  myArray a;
  a.testInput();  // a.n = 2;
  a.print();  //a.getIndex(5).print();  complexCls d = a.sum();  a.setIndex(4, d);  a.print();  d.print();
  myArray b = a; // myArray b(a); initialization
  b = a; // b.operator=(a)
  myArray c;
  c = b = a; // c.opertor=(b.operator=(a))
  b.print();
}
