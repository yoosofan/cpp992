#include<iostream>
using namespace std;

template<typename T> int search(T* a, T v, int n){
  for(int i = 0; i < n; i++) 
    if(a[i] == v) 
      return i;
  return -1;
}

int main(){
  double ae[20] = {3, 4, 5, 6, 8, 9};
  cout << search<double>(ae, 3, 6) << endl;
  cout << search<double>(ae, 33, 6) << endl;
  // cout << search(ae, 33, 6) << endl;
  cout << search(ae, double(33), 6) << endl;
  string am[] = {"ali", "reza", "kamran", "hamid"};
  cout << search<string>(am, "reza", 4) << endl; // type of "reza" is 'const char *'
  // cout << search(am, "ali", 4) << endl;
  cout << search(am, string("ali"), 4) << endl;
  string s3 = "kamran";
  cout << search(am, s3, 4) << endl;
  auto z = 4.0; // 4 ; // 4.0;
  cout << search<double>(ae, z, 6) << endl;
  cout << search(ae, z, 6) << endl;
  return 0;
}
