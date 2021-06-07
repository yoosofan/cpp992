#include <fstream>
#include<iostream>
#include <cstdlib>
using namespace std;
//void *
//char *
//int ff3(void * hh);
//int ff4(char * hh);
template<class T>class myIntArray{   fstream f1;
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
int main(){
  myIntArray<int> myi("temp4.in");
  m yi.writeNext(16);
  myi.writeNext(19);
  myi.rewind();
  cout<<myi.readNext()<<endl;cout.flush();
  cout<<myi.readNext()<<endl<<endl;
  cout<<myi.read(0)<<endl;
  cout<<myi.read(1)<<endl;
  myi.write(54,10);
  //cout<<myi.read(25)<<endl<<endl;
  return 0;
}
