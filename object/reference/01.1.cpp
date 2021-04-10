#include<iostream>
void f1(int*);
int * f2(void);
int main(){
	int a = 0;
	int& b = a;
	int c = a;
	std::cout << __LINE__ << ":\t" << a << "\t" << c << "\t" << std::endl;
	b = 3;
	std::cout << __LINE__ << ":\t" << a << "\t" << b << '\t' << c << "\t" << std::endl;
  int *pa = nullptr;
  pa = & a;
  std:: cout << __LINE__ << ":\t" << *pa << std::endl;
  pa = & c;
  c = 4;
  std:: cout << __LINE__ << ":\t" << *pa << std::endl;
  b = c;
	std::cout << __LINE__ << ":\t" << a << "\t" << c << "\t" << std::endl;
  f1(pa);
  std::cout << __LINE__ << ":\t" << a << "\t" << c << "\t" << std::endl;
	pa = f2();
  std:: cout << __LINE__ << ":\t" << *pa << std::endl;
  return 0;
}

void f1(int* pk){
  std::cout << __LINE__ << "\t pk: " << *pk << std::endl;
  *pk = 7;
  std::cout << __LINE__ << "\t pk: " << *pk << std::endl;
}

int* f2(void){
  int a = 5;
  return &a;
}
