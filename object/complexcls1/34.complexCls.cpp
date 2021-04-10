/* 
 * Copyright 2016 Ahmad Yoosofan <yoosofan@myfastmail.com>, 
 * http://yoosofan.kashanu.ac.ir
 * University of Kashan (http://kashanu.ac.ir)
 * 2016/02/25
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
*/

#include <iostream>
#include <cmath>
using namespace std;
struct complexCls{
   double r,i;
   explicit complexCls(double m=0 , double n=0) {r=m;i=n;}
   void Show(){cout<<r<<"+ i "<<i<<endl;}
   double Magnitude(){return sqrt(r*r+i*i);}
   operator bool() const {cout<<"aaa:::: "<<endl;return r==0 && i==0 ? false : true;}
};
complexCls operator +(complexCls a,complexCls b){
  complexCls result ;
  result.r = a.r + b.r;
  result.i = a.i + b.i;
  return result;
}
complexCls operator -(complexCls a,complexCls b){
  complexCls result ;
  result.r = a.r - b.r;
  result.i = a.i - b.i;
  return result;
}
complexCls operator *(complexCls a,complexCls b){
  complexCls result;
  result.r = a.r * b.r;
  result.i = a.i * b.i;
  return result;
}
int main(){
      complexCls a(2,3);
      complexCls b(4,5);
      complexCls c;
      if(c) cout<< " c is not zero "<<endl;
      else  cout<< " c is zero "<<endl;
      c.Show();
      c=a+b;
      //c=a+12;
      
}
