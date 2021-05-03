#include<iostream>
using namespace std;
void swap(double&, double&);
void swap(string&, string&);
int main(){
  double x = 7, y = 87;
  string s1 = "abc", s2 = "zghm";
  swap(x, y);
  cout << "x: " << x << "\t y: " << y << endl;
  swap(s1, s2);
  cout << "s1: " << s1 << "\t s2: "<< s2 << endl;
  return 0;
}
void swap(double& a, double& b){
  double temp = a;
  a = b;
  b = temp;
}
void swap(string& a, string& b){
  string temp = a;
  a = b;
  b = temp;
}
