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
template<typename T> class myArray{
	T *a = nullptr;
	int n = 0;
	public:
	myArray(const T *ma = nullptr, int n = 0){ /// myArray(const *ma, ...
		if(n==0 || ma==nullptr){
			n=0;
			a=nullptr;
		}
		else{
			a=new T[this->n=n];
			for(int i=0;i<n;i++)
				a[i]=ma[i];
		}
	}
  
  myArray(const myArray& b){
    a = new T[n = b.n];
    for(int i = 0; i < n; i++)
      a[i] = b.a[i];
  }

	~myArray(){
    delete[] a;
    a = nullptr;
    n = 0;
    cout << "in destructor" << endl;
  }
  
	T& operator[](int index){
    if(index >= 0 && index < n)
      return a[index];
    cout << "error: out of range" << endl; 
    return a[0]; // exit(0);
  }

	myArray& operator=(const myArray&b){
		this->a = new T[this->n=b.n];
		for(int i=0;i<n;i++)
      a[i] = b.a[i];
		return *this;
	}
};
int main(){
	//// double x= ...
	double x[100000]={10,12,34,54};
	////
	myArray<double> d(x, sizeof(x)/sizeof(double));
	cout<<d[1]<<endl;
	cout.flush();
	myArray<double> g,h;
	h=g=d;
	g[1]=8;
	cout<<d[3]<<endl;
	cout<<d[1]<<endl;
	cout<<d[1]<<endl;
	
	return 0;
}
