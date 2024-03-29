/*
 * Copyright 2018 Ahmad Yoosofan <yoosofan@myfastmail.com>,
 * http://yoosofan.github.io
 * http://yoosofan.kashanu.ac.ir
 * University of Kashan (http://kashanu.ac.ir)
 * 2014/05/03
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
*/

#include <iostream>
#include <cmath>
using namespace std;

class complexCls{
  double r, i;
  public:

  complexCls(int m = 0, int n = 0){
    r = m;
    i = n;
  }

  void Show(void){
    cout << r << "+ i " << i << endl;
  }

  double Magnitude(void){
    return sqrt(r*r + i*i);
  }

  void input(void){
    cout << "Enter real:";
    cin >> r;
    cout << "Enter imaginary:";
    cin >> i;
  }

  complexCls operator +(complexCls b){
    complexCls c;
    c.r = r + b.r;
    c.i = this->i + b.i;
    return c;
  }

  friend complexCls add(complexCls a, complexCls b){
    complexCls c = a;
    c.r += b.r;
    c.i += b.i;
    return c;
  }
};

void f1(void){
  complexCls a(2, 3), b(2, 1), c(a);
  c = a + b;
  c.Show();
  c = add(a, b);
  c.Show();
  c = a + b + c;
  c.Show();
}

void f2(void){
  complexCls cp[] = { {2,3}, {4,6}, {7,8} };
  cp[0].Show();
  cp[0] = cp[1] + cp[2];
  cp[0].Show();
}

int main(){
  f2();
  return 0;
}
