#include<iostream>
using namespace std;
class Person{
    string name;
    int year;
    public:
    Person(string name1="Ali",int year1=12):name(name1),year(year1)
    {}
    //Person(string name1="Ali",int year1=12){name=name1;year=year1;}
    virtual string getJob(void)=0; // abstract function
    void print(void){
        cout<<"name :"<<name<<endl;
        cout<<"year :"<<year<<endl;
        cout<<"job  :"<<getJob()<<endl;
    }
};
class Student: public Person{
    string stdnm;
    public:
    virtual string getJob(void)
    {return "student";}
    Student(string name1="Ali", int year1=12,string d="234234"):Person(name1,year1)
    {stdnm=d;}
};
class Employee: public Person{
    public:
    virtual string getJob(void)
    {return "employee";}
    Employee(string name1="Ali",int year1=12):Person(name1,year1){}
};
int main(){
    // Person p1;
    Student st1;
    Student st2("kamran", 49);
    Employee em1("Hadi",20);
    Employee em2("reze",56);
    Person* p[20];
    p[0] = &st1;
    p[1] = &em1;
    p[2] = &st2;
    p[3] = &em2;
    
    for(int i = 0; i < 4; i++)
      cout << p[i] -> getJob() << endl;
    
    Student (* p2)[20]; // Student ** p2;
    Student p4[10];
    Student p5[20];
    // p2 = &p4;
    p2 = &p5;

    return 0;
}
