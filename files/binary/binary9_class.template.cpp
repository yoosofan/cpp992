// Error
#include <fstream>
#include<iostream>
#include <cstdlib>
#include<cstring>
using namespace std;
//void *
//char *
//int ff3(void * hh);
//int ff4(char * hh);
template<class T>
class myIntArray{
   fstream f1;
   public:
   myIntArray(const char *fname="temp1.in"){
     f1.open(fname,ios::in|ios::out|ios::binary);
     if(!f1){
       f1.open(fname,ios::out|ios::binary);
       if(!f1){ cout<<"Can not open file"<<endl; exit(0);}
       else{f1.close(); f1.open(fname,ios::in|ios::out|ios::binary);}
     }
   }
   ~myIntArray(){ f1.close();}
   T read(int index){
     T j;
     f1.seekg(index*sizeof(T),ios::beg); // ios::end   ios::cur
     f1.read((char *)&j , sizeof(T));
     return j;
   }
   void write(T j, int index){
     f1.seekp(index*sizeof(T),ios::beg);
     f1.write((char *) &j , sizeof(T));
   }
   T readNext(void){
     T j;
     f1.read((char *)&j , sizeof(T));
     return j;
   }
   void writeNext(T j){
     f1.write((char *)&j, sizeof(T));
     f1.flush();
   }
   void rewind(void){ f1.seekg(0,ios::beg);f1.seekp(0,ios::beg);}
 };
struct student{
  char name[20];
  char stdno[14];
  double avg;
  // Error
  //friend ostream& operator<<(ostream & o1, student &);
  friend ostream& operator<<(ostream & o1, student );
  char  operator[](int  index);
};
// Error
//ostream& operator<<(ostream & o1, student & m1){
ostream& operator<<(ostream & o1, student m1){
  o1<<"( "<<m1.name<<" , "<<m1.stdno<<
  " , "<<m1.avg<<" ) ";
  return o1;
}
int mystrlen(char *s){int i;for(i=0;s[i];i++); return i;}
//if(unsigned(index)<strlen(stdno)) return stdno[index];
char student::operator[](int  index){
  if(index<mystrlen(stdno)) return stdno[index];
  return stdno[0];
}
int main(){myIntArray<student> myi("temp6.in");
  student st1={"Ali","933424",15.1};int a=1;
  cout<<st1[a]<<endl;
  //st1[1]='2';
  myi.writeNext(st1);
  strcpy(st1.name,"Reza");strcpy(st1.stdno,"923434");
  st1.avg=14.2;
  myi.writeNext(st1);
  myi.rewind();
  cout<<myi.readNext()<<endl;
  //operator<<(cout,myi.readNext());
  //student *ps= & myi.readNext(); Error
  cout<<myi.readNext()<<endl<<endl;
  cout<<myi.read(0)<<endl;
  cout<<myi.read(1)<<endl;
  //myi.write(54,10);
  //cout<<myi.read(25)<<endl<<endl;
  return 0;
}
