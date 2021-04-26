/*
 * Copyright 2021 Ahmad Yoosofan <yoosofan@gmx.com>,
 * http://yoosofan.github.io
 *
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

  void Show() const {
    cout << '(' << r << ',' << i << ')' << '\t' << endl;
  }

  double Magnitude(void) const {
    return sqrt(r*r + i*i);
  }

  bool operator !() const {
    return !(r == 0 && i == 0 ? false : true);
  }

  complexCls operator++(void){   // ++a
   i++;
   r++;
   return *this;
  }

  complexCls operator++(int dummy){ // a++
   complexCls result = *this;
   r++;
   i++;
   return result;
  }

  complexCls operator +=(const complexCls& b){ // a++
    this -> r+= b.r;
    this -> i+= b.i;
    return *this;
  }

  double& operator [](const int index){
    if (index < 2 && index >= 0)
      return  index == 0 ? r : i ;
    cout << "Error: out of range " << endl;
    return r;
  }

  friend bool operator ==(const complexCls& a, const complexCls& b){
    return a.r == b.r && a.i == b.i ;
  }

  friend bool operator !=(const complexCls& a, const complexCls& b){
    return a.r != b.r || a.i != b.i ;
  }

  friend complexCls operator +(const complexCls& a, const complexCls& b){
    complexCls result ;
    result.r = a.r + b.r;
    result.i = a.i + b.i;
    return result;
  }

  friend complexCls operator -(const complexCls& a, const complexCls& b){
    complexCls result ;
    result.r = a.r - b.r;
    result.i = a.i - b.i;
    return result;
  }

  friend complexCls operator *(const complexCls& a, const complexCls& b){
    complexCls result ;
    result.r = a.r * b.r - a.i * b.i;
    result.i = a.i * b.r + a.r * b.i;
    return result;
  }

  friend ostream& operator <<(ostream& o1, const complexCls& a){
    o1 << '(' << a.r << ", " << a.i << ')';
    return o1;
  }

};

int main(){
  complexCls d(2); // d = 2;
  complexCls a(2, 3);
  complexCls b(4, 5);
  complexCls c;
  a[0] = 8;
  cout << a[0] << ",  " << a[1] << endl;
  c.Show();
  c = a + b; // c = operator +(a, b)
  c.Show();
  c = 17 * a; // c = operator +(complexCls(17), b)
  c = ++ b;
  c = a ++;
  if ( c == a)
    cout << "c == a" << endl;
  else
    cout << "c != a" << endl;
  if ( c != a)
    cout << "c != a" << endl;
  else
    cout << "c == a" << endl;
  if(!c)
    cout << "c is not zero" << endl;
  c.Show();
  c = complexCls(0,0);
  if(!c)
    cout << "c is not zero" << endl;
  else
    cout << "c is zero" << endl;
  cout << a << b << endl;
  return 0;
}
