#include<iostream>
int main(){
	int a = 0;
	int& b = a;
	int c = a;
	std::cout << a << "\t" << c << "\t" << std::endl;
	b = 3;
	std::cout << a << "\t" << b << c << "\t" << std::endl;
	return 0;
}
