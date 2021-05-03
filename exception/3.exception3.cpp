#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <exception>
using namespace std;
void f1(int i) throw(int);
class myException : public exception {
  public:
  int errorNumber;
  char nameError[50];
  public:
  myException(int errn=0 , const char *errc="Unknown error "){
    errorNumber = errn;
    strcpy(nameError , errc);
  }
  virtual const char* what() const throw(){
    return "My error 1";
  }
};
class myException2 : public exception {
  public:
  virtual const char* what() const throw(){
    return "My error 2";
  }
};
class myACls{
  int mm;
  public:
    myACls(int a=12){mm=a;}
    void f1(void) const {
      int tt;
      tt=15;
      cout<<mm<<tt<<endl;
    }
    //void f2(void) const { mm=15; }
    void f3(void) {mm = 19;}
    void f4(void) const {/*f3();*/}
  };

using namespace std;

void fff() throw(){cout <<"In ffff "<<endl;}

void f1(int i) throw(int){
  if( i <= 0)   throw 1;
  else    cout << i<<endl;
}
void f2(int mm){
  if (mm > 20)    throw 2;
  else    cout<<mm<<endl;
}
void f4(int mm){
  if(mm<10) throw "Error ";
  cout << "In f4 mm "<< mm<<endl;
}
void f3(void){
  try {
    f1(-3);
    f4(2);
  }catch(int mm){
    cout <<"In f3 "<<mm<<endl;
  }
}
struct RootCls{ double root1 , root2;};
RootCls solve(double a, double b, double c){
  RootCls retVal ; double delta;
  if(a == 0 && b == 0) throw myException(7,"a == 0 and b == 0 ");
  if(a==0){ retVal.root1 = retVal.root2 = -c / b ; }
  else{
    delta = (b * b - 4 *a * c) ;
    if(delta < 0 ) throw myException(8,"The equation does not have real root");
    delta = sqrt(delta);
    retVal.root1 = (-b + delta)/(2*a);
    retVal.root2 = (-b - delta)/(2*a);
  }
  return retVal;
}

int main(){
  try{
    f1(1);
    f2(12);
    f3();

  }catch(int m){
    cout <<"catch expception "<<m<<endl;
  }catch (char * sm){
    cout<<"catch f4 error in main "<< sm<<endl;
  }
  //set_terminate(fff);
  //set_unexpected(fff);
  try{
    f2(13);
    RootCls rc1 =solve(4 , 5, 2);
    cout<< rc1.root1<<" root2  "<<rc1.root2<< endl;
  }catch(int nn){
    cout <<"Second catch in main "<<nn << endl;
  }
  catch(myException &a1){cout<<"My Exception catch "<<a1.what()<<endl;}
  catch(exception &a2){  cout << "my second exception "<<a2.what()<<endl;}
  try{
    throw 5;
    cout <<"Execution will not reach to this statement"<<endl;
  }catch(int  ll){ cout <<"Third catch in main "<<endl;}
  try{
    int a=1,b=0;
    if( b == 0) throw myException2();
    else cout <<a/b<<endl;
  }catch(...){ cout <<"Except2 "<<endl; }
  //catch (bad_exception aa){ cout <<"Divide by zero "<<endl; }
  //printf("%d %d ",a,b);
  cout<< "End "<<endl;
  return 0;
}
