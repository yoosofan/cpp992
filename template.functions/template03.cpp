#include<iostream>
// using namespace std;

class complexCls{ 
  double r,i;   
  public:
  complexCls(double m=0 , double n=0)
  {r=m;i=n;}

  friend complexCls operator +(const complexCls& a,const complexCls& b)
  {complexCls result ;  result.r = a.r + b.r;  result.i = a.i + b.i;  return result;}
  
  friend complexCls operator -(const complexCls& a,const complexCls& b)
  {complexCls result ;  result.r = a.r - b.r;  result.i = a.i - b.i;  return result;}
  
  friend complexCls operator *(const complexCls& a,const complexCls& b)
  {complexCls result; result.r = a.r * b.r; result.i = a.i * b.i;  return result;}
  
  friend bool operator==(const complexCls& a,const complexCls& b)
  {return a.r==b.r && a.i==b.i;}
  
  friend std::ostream& operator<<(std::ostream&o1, complexCls&a)
  {o1<<'('<<a.r<<" , "<< a.i << ')' ; return o1;}

};

template<class T> void swap(T& a, T &b){
  T temp = a;
  a = b;
  b = temp;
}

int main(){
  int a = 1, b = 2; 
  swap<int>(a, b);
  std::cout << "a:" << a << "\tb:" << b << std::endl;
  std::string s1 = "ali", s2 = "reza";
  swap(s1, s2);
  std::cout << "s1:" << s1 << "\ts2:" << s2 << std::endl;
  return 0;
}
