#include<iostream>
using namespace std;
class Person{
  string name;
  int year;
  string job;
public:
  Person(string name1="Ali",int year1=12,
	string job1="student"):name(name1),
	year(year1), job(job1){}
  virtual string getJop(void)
  {return job;}
  void print(void){
    cout<<"name :"<<name<<endl;
    cout<<"year :"<<year<<endl;
    cout<<"job  :"<<job <<endl;
  }
};/*
class Square: public Shape{
  int d;
public:
  virtual int Area(void){return d*d;}
  Square(int d=1){this->d=d;}
};*/
int main(){
  Person p("Reza",11,"student");
  p.print();
  return 0;
}