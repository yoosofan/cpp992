//Error
/* 
 * Copyright 2018 Ahmad Yoosofan <yoosofan@myfastmail.com>, 
 * http://yoosofan.github.io
 * http://yoosofan.github.io/
 *
 * 2014/05/03
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
*/
#include <iostream>
using namespace std;
class myArray{
	double *a;
	int n;
	public:
	///
	myArray() = delete;
	///
	myArray(const double *ma, int n){ /// myArray(const *ma, ...
		a = new double[this->n=n];
		for(int i=0; i<n; i++)
			a[i] = ma[i];
	}
};
void f1(myArray b){ /// int f1 ... 
	myArray c;
	c=b;
}
int main(){
	//// double x= ...
	double x[]={10,12,34,54};
	////
	myArray d(x, sizeof(x)/sizeof(double));
	f1(d);
	return 0;
}
