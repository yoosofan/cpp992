#include<iostream>
#include<string>
using namespace std;

class complexCls{
	double r,i;
	public:

  complexCls(double a=0,double b=0){
    r = a;
    i = b;
  }

	complexCls operator +(const complexCls a){
    complexCls ret;
    ret.r = r + a.r;
    ret.i=i+a.i;
    return ret;
  }

	friend ostream& operator<<(ostream&o1,const complexCls m){
    o1<<'('<<m.r<<','<<m.i<<')';
    return o1;
  }

  bool operator==(complexCls m2){
    if(r == m2.r && i == m2.i)
      return true;
    return false;
  }
};

template<typename T> class Node{
	T v;
  Node<T> *next;
  public:

	Node(T*m1 = nullptr){
    if(m1)
      v = *m1;
    next = nullptr;
  }

	bool operator ==(Node<T> m2){
    if(v == m2.v)
      return true;
    return false;
  }
};

template<typename Type, typename Index>
class array{
	Type *a;
  int n, count;
  Index *ind;
  public:

	array(int n=20){
    this->n = n;
    a = new Type[n];
    ind = new Index[n];
    count=0;
  }

	~array(){
    n = 0;
    delete[] a;
    a = nullptr;
  }

	Type& operator [](Index index){
		int i;
		for(i=0; i < count; i++)
		  if(ind[i] == index)
        return a[i];
		if(i < n){
      ind[count] = index;
      return a[count++];
    }
    else
      throw "out of range";
		return a[0];
	}

	void print(void){
    for(int i=0;i<count;i++)
      cout<<ind[i]<<" = "<<a[i]<<endl;
  }
};

int main(){
	array<int,Node<int>> m1(10);
  int aa=12;
  Node<int> n1(&aa);
	m1[n1]=34;
  cout << m1[n1] << endl;
  aa=4;
  m1[ Node<int>(&aa) ] = 4;
	cout << m1[ Node<int>(new int(4))]<<endl;array<int,string> cm1;
	array<string, complexCls> am1;
	cm1["ali"] = 4;
  cm1["Reza"] = 7;
  cm1.print();
  cout<<cm1["ali"]<<endl;
	cout<<cm1["Reza"]<<endl;	
  am1[complexCls(3,4)]="Hamid";
	cout << am1[complexCls(3,4)]<<endl;  
  am1.print();
	return 0;
}
