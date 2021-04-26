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
	myArray(const double *ma=nullptr,int n=0){ /// myArray(const *ma, ...
		if(n==0 || ma==nullptr){
			n=0;
			a=nullptr;
		}
		else{
			a=new double[this->n=n];
			for(int i=0;i<n;i++)
				a[i]=ma[i];
		}
	}
	~myArray(){delete[]a;a=nullptr;n=0;cout<<"in destructor"<<endl;}
	double& operator[](int index){return a[index];}
};
void f1(myArray b){ /// int f1 ... 
	myArray c;
	c=b;
	c[1]=8;
}
int main(){
	//// double x= ...
	double x[]={10,12,34,54};
	////
	myArray d(x,sizeof(x)/sizeof(double));
	cout<<d[1]<<endl;
	cout.flush();
	f1(d);
	cout<<d[3]<<endl;
	cout<<d[1]<<endl;
	d[3]=4;
	cout<<d[3]<<endl;
	
	return 0;
}
