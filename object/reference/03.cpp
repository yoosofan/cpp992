// Ahmad Yoosofan : third try
#include <iostream>
using namespace std;
int& test();
int main(){
	cout << test()<<endl;
    test() = 5;
    cout << test()<<endl;
    return 0;
}
int& test(){
	static int num=0;
  return num;
}
