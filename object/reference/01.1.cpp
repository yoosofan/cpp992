#include<iostream>
void f1(int*);
int main(){
	int a = 0;
	int& b = a;
	int c = a;
	std::cout << a << "\t" << c << "\t" << std::endl;
	b = 3;
	std::cout << a << "\t" << b << '\t' << c << "\t" << std::endl;
  int *pa = nullptr;
  pa = & a;
  std:: cout << *pa << std::endl;
  pa = & c;
  c = 4;
  std:: cout << *pa << std::endl;
  b = c;
	std::cout << a << "\t" << c << "\t" << std::endl;
  f1(pa);
  std::cout << a << "\t" << c << "\t" << std::endl;
	return 0;
}

void f1(int* pk){
  std::cout << __LINE__ << "pk: " << pk << std::endl;
  *pk = 7;
  std::cout << __LINE__ << "pk: " << pk << std::endl;
}
