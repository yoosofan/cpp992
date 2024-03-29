/* 
 * Error
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

  public:

  complexCls(double m = 0, double n = 0){
    r = m;
    i = n;
  }

  void Show(){
    cout << '(' << r << ',' << i << ')' << '\t' << endl;
  }

  double Magnitude(){
    return sqrt(r*r + i*i);
  }

  complexCls operator +(const complexCls& b){
    complexCls result = *this ;
    result.r +=  b.r;
    result.i +=  b.i;
    return result;
  }

}; 

int main(){
      complexCls d(2); // d = 2;
      complexCls a(2, 3);
      complexCls b(4, 5);
      complexCls c;
      c.Show();
      c = a + b; // c = a.operator +(b)
      c.Show();
      c = 17 + a; // c = 17.operator +(b)
}
