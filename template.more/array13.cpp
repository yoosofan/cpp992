#include<iostream>
#include<string>
using namespace std;

class complexCls{
  double r, i;
  public:
  complexCls(double a=0, double b=0){
    r = a;
    i = b;
  }
  
  complexCls operator+(const complexCls a){
    complexCls ret;
    ret.r = r + a.r;   
    ret.i = i+a.i; 
    return ret;  
  }
  
  friend ostream& operator<<(ostream&o1, const complexCls& m){
    o1 << '(' << m.r << ',' << m.i << ')';
    return o1;
  }

  bool operator ==(complexCls m2) const{
    if(r == m2.r && i == m2.i)
      return true; 
    return false;
  }
};

template<typename T> class Node{
  T v;
  Node<T>* next = nullptr;
  public:
  
  Node() = default;
  
  Node(const T& m1){
    v = m1;
  }
  
  bool operator ==(const Node& m2) const {
    if(v == m2.v) 
      return true; 
    return false;
  }
};

template<typename Type = string, typename Index = int, int N = 20> class array{
  Type* a = nullptr ;  
  int n = N, count = 0; 
  Index* ind = nullptr;
  public:
  
  array(){
    this->n = N;
    a = new Type[n];
    ind = new Index[n];
    count = 0;
  }
  
  ~array(){
    n = count = 0;
    delete[] a; 
    a = nullptr;
    delete[] ind;
    ind = nullptr;
  }
  
  array(const array& m1){
    n = m1.n;
    a = new Type[n]; 
    ind = new Index[n]; 
    count = m1.count;
    for(int i=0; i < count; i++)
      a[i] = m1.a[i] , ind[i] = m1.ind[i];
  }
  // array(array&& m1){n=m1.n;a=m1.a; ind=m1.ind; count=m1.count; m1.n=0;m1.a=nullptr;m1.ind=nullptr;}

  Type& operator[](const Index& index){
    int i;
    for(i = 0; i < count; i++)
     if(ind[i] == index) 
       return a[i];
    if(i < n){
      ind[count] = index; 
      return a[count++];
    }
    throw 1;
  }

  friend ostream&operator<<(ostream&o1, const array& m1){
    o1<<m1.n<<"   "<<m1.count<<endl;
    for(int i=0;i<m1.count;i++)
      o1<<'['<<m1.ind[i]<<"]="<<m1.a[i]<<endl;
    return o1;
  }

  
  array operator = (const array& m1){
    n = m1.n;
    a = new Type[n]; 
    ind = new Index[n]; 
    count = m1.count;
    for(int i=0; i < count; i++)
      a[i] = m1.a[i] , ind[i] = m1.ind[i];
    return *this;
  }
};

// template<class T,class I,int K>ostream&operator<<(ostream&o1,const array<T,I,K>m1){

void f2(void){
  throw "test";
}

void f1(void){
  f2();
} 
//} void f1(void) throw(const char*){throw "dghdd";}
int main(){
  array<int, Node<int>> m1;
  int aa = 12; 
  Node<int> n1(aa);
  m1[n1] = 44;
  cout << m1[n1] << endl;
  aa = 4;
  m1[Node<int>(aa)] = 4;
  cout << m1[Node<int>(4)] << endl;
  // f1();
  try{
    array<int, string, 3> cm1; 
    array<string, complexCls> am1;
    array<string> kl1; 
    kl1[0] = "dddd";
    kl1[13] = "asddd"; 
    cout << kl1;
    cm1["ali"] = 4; 
    cout << "line 56 " << endl;
    cm1["Reza"] = 7; 
    array<> hk1;// array cfw1;
    cout << cm1["ali"] << endl;
    cout << cm1["Reza"] << endl;
    am1[complexCls(3,4)] = "Hamid";
    cout << am1[complexCls(3,4)] << endl;
    f1();
    cout << cm1;  
    cout << am1;
    cout << "hello" << endl;
  }catch(const int& a){
    cout << "out of range" << endl;
  }
  //}catch(const myException &a){cout<<"out of range"<<a.what()<<endl;}
  catch(...){
    cout << "Exception .... " << endl;
  }
  return 0;
}
