#include <fstream>
#include<iostream>
#include<cstring>
using namespace std;
int mystrlen(char *s);

template<typename T>class myIntArray{
  fstream f1;
  public:
  myIntArray(const char *fname="temp1.in"){
    f1.open(fname, ios::in|ios::out|ios::binary);
    if(!f1){
      f1.open(fname, ios::out|ios::binary);
      if(!f1){
        cout << "Can not open file" << endl;
        throw "Can not open file";
      }
      else{
        f1.close();
        f1.open(fname, ios::in|ios::out|ios::binary);}
     }
   }

  ~myIntArray(){f1.close();}

  T read(const int index){
    T j;
    f1.seekg(index*sizeof(T), ios::beg); // ios::end   ios::cur
    f1.read((char *)&j , sizeof(T));
    return j;
  }

  void write(const T& j, int index){
    f1.seekp(index*sizeof(T),ios::beg);
    f1.write((char*) &j , sizeof(T));
  }

  T& readNext(void){
    static T j;
    f1.read((char*)&j , sizeof(T));
    return j;
  }

  void writeNext(const T& j){
    f1.write((char*)&j, sizeof(T));
    f1.flush();
  }

  void rewind(void){
    f1.seekg(0,ios::beg);
    f1.seekp(0,ios::beg);
  }
};

struct student{
  char name[20];
  char stdno[14];
  double avg;//  char c1;
  friend ostream& operator<<(ostream &o1, const student& m1){
    o1 << "( " << m1.name << " , " <<
    m1.stdno << " , " << m1.avg << " ) ";
    return o1;
  }

  char& operator[](const int& index){
    if(index<mystrlen(stdno))
      return stdno[index];
    return stdno[0];
  }

};

int mystrlen(char *s){
  int i;
  for(i=0; s[i]; i++);
  return i;
}

int main(){
  myIntArray<student> myi("temp6.in");
  student st1={"Ali","933424",15.1};
  int a=1;
  cout << st1[a] << endl;
  st1[1]='2';
  myi.writeNext(st1);
  strcpy(st1.name,"Reza");
  strcpy(st1.stdno,"923434");
  st1.avg=14.2;
  myi.writeNext(st1);
  myi.rewind();
  cout<<myi.readNext()<<endl;  //operator<<(cout,myi.readNext());
  //student s1= myi.readNext();  student *ps= &s1
  student *ps= &myi.readNext(); //Error
  cout << myi.readNext() << endl;
  cout << myi.read(0) << endl;  
  cout << myi.read(1) << endl;
  return 0;
}
