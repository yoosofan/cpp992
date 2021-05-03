#include<iostream>
using namespace std;
struct complexCls{ double r,i;   complexCls(double m=0 , double n=0){r=m;i=n;}};
complexCls operator +(const complexCls& a,const complexCls& b)
{complexCls result ;  result.r = a.r + b.r;  result.i = a.i + b.i;  return result;}
complexCls operator -(const complexCls& a,const complexCls& b)
{complexCls result ;  result.r = a.r - b.r;  result.i = a.i - b.i;  return result;}
complexCls operator *(const complexCls& a,const complexCls& b)
{complexCls result; result.r = a.r * b.r; result.i = a.i * b.i;  return result;}
bool operator==(const complexCls& a,const complexCls& b)
{return a.r==b.r && a.i==b.i;}
ostream& operator<<(ostream&o1, complexCls&a)
{o1<<'('<<a.r<<" , "<< a.i << ')' ; return o1;}
template<class T> void swap(T& a, T &b){T temp=a;a=b;b=temp;}
int main(){
  int a=1,b=2; 
  swap<int>(a,b);
  cout<<"a:"<<a<<"\tb:"<<b<<endl;
  string s1="ali",s2="reza";
  swap<string>(s1,s2);
  cout<<"s1:"<<s1<<"\ts2:"<<s2<<endl;
  return 0;
}
