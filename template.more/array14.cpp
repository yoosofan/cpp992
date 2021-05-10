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
  
  friend complexCls operator +(const complexCls& b, const complexCls& a){
    complexCls ret;
    ret.r = b.r + a.r;   
    ret.i = b.i + a.i; 
    return ret;  
  }
  
  friend ostream& operator <<(ostream&o1, const complexCls& m){
    o1 << '(' << m.r << ',' << m.i << ')';
    return o1;
  }

  friend bool operator ==(const complexCls& m1, const complexCls& m2){
    if(m1.r == m2.r && m1.i == m2.i)
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
  Type a[N];  
  int n = N, count = 0; 
  Index ind[N];
  public:
  
  array() = default;
  
  ~array(){
    n = count = 0;
  }
  
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
};
 
int main(){
  array<int, Node<int>> m1;
  int aa = 12; 
  Node<int> n1(aa);
  m1[n1] = 44;
  cout << m1[n1] << endl;
  aa = 4;
  m1[Node<int>(aa)] = 4;
  cout << m1[Node<int>(4)] << endl;
  try{
    array<int, string, 3> cm1; 
    array<string, complexCls> am1;
    array<string> kl1; 
    arra<int, Node<int>> m8;
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
    cout << cm1;  
    cout << am1;
    cout << "hello" << endl;
  }catch(const int& a){
    cout << "out of range" << endl;
  }
  catch(...){
    cout << "Exception .... " << endl;
  }
  return 0;
}
