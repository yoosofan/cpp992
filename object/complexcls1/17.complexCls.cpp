/* 
 * Copyright 2021 Ahmad Yoosofan <yoosofan@gmx.com>, 
 * http://yoosofan.github.io
 * University of Kashan (http://kashanu.ac.ir)
 * 2021/04/19 16:27:16
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
*/

#include <iostream>
#include <cmath>
using namespace std;
class complexCls{
  double r = 0, i = 0;
   
  explicit complexCls(double m = 0 , double n = 0){
    r = m;
    i = n;
  }
   
  /*complexCls(double m = 0 , double n = 0){
    r = m;
    i = n;
  }*/
   
   //complexCls(int m=0 , int n=0) {r=m;i=n;}

  void Show(){
    cout << '(' << r << ',' << i << ')' << '\t' << endl;
  }

  double Magnitude(){
    return sqrt(r*r + i*i);
  }

  friend complexCls operator +(const complexCls& a, const complexCls& b){
    complexCls result ;
    result.r = a.r + b.r;
    result.i = a.i + b.i;
    return result;
  }

}; 

int main(){
      //complexCls a=2;//(2,3);
      complexCls a(2, 3);
      complexCls b(4, 5);
      complexCls c;
      c.Show();
      c = a + b; 
      c.Show();
      //c = a+1;
      // c = a + 12;
}
