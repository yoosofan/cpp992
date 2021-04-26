#include <iostream>
#include <cmath>
using namespace std;

class complexCls{
   double r,i;
  public:
   complexCls(int m=0 , int n=0){r=m;i=n;}
   void Show(){cout<<r<<"+ i "<<i<<endl;}
   double Magnitude(){return sqrt(r*r+i*i);}

   complexCls operator += (complexCls &a){
      r += a.r;
      i += a.i;
      return *this;
   }
   complexCls operator -= (complexCls &a){
      r -= a.r;
      i -= a.i;
      return *this;
   }
   complexCls operator *= (complexCls &a){
      r = r * a.r - i * a.i;
      i = i * a.r + r * a.i;
      return *this;
   } // It is not necessary to implement the = operator
   // for this class, because the default behavior of
   // this operator is identical to the following
   // implementation.
   complexCls operator = (const complexCls a){
      r = a.r;
      i = a.i;
      return *this;
   }
   complexCls(const complexCls & a){
      r = a.r;
      i = a.i;
   }
/*   double & operator [] (const int index){
      if(index == 0)  return r;
      if(index == 1)  return i;
      cout<< " Error in accessing the value;\n";
      return r;
   }
*/
   double & operator [] (const int index){
     double &m=r;
      if(index == 0)  m=r;
      if(index == 1)  m=i;
      else{
        cout<< " Error in accessing the value;\n";
        m=r;
      }
      return m;
   }

   friend complexCls operator +(const complexCls  a, const complexCls  b);
   friend complexCls operator -(const complexCls  a, const complexCls  b);
   friend complexCls operator *(const complexCls  a, const complexCls  b);

};
complexCls operator +(const complexCls  a ,const  complexCls  b){
      complexCls result ;
      result.r = a.r + b.r;
      result.i = a.i + b.i;
      return result;
}
complexCls operator -(const complexCls  a , const complexCls  b){
   complexCls result ;
   result.r = a.r - b.r;
   result.i = a.i - b.i;
   return result;
}
complexCls operator *(const complexCls  a , const complexCls  b){
   complexCls result;
   result.r = a.r * b.r - a.i * b.i;
   result.i = a.i * b.r + a.r * b.i;
   return result;
}

int main(){
      complexCls a(2,3);
      complexCls b(4,5);
      complexCls c;
      c = a + b;
      c.Show();
      c = a + 12;
      c.Show();
      c = 12 + a;
      c.Show();
}

