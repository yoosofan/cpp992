#include <fstream>
#include<iostream>
#include <cstdlib>
#include<cstring>
using namespace std;

template<typename T>class myIntArray{
  fstream f1;
  public:
  myIntArray(const char *fname = "temp1.in"){
    f1.open(fname, ios::in | ios::out | ios::binary);
    if(!f1){
      f1.open(fname, ios::out | ios::binary);
      if(!f1){
        cout << "Can not open file" << endl;
        throw "Cannot Open File";
      }
      else{
        f1.close();
        f1.open(fname, ios::in | ios::out | ios::binary);
      }
    }
  }
  ~myIntArray(){f1.close();}

    T read(const int index){
      T data;
      f1.seekg(index*sizeof(T), ios::beg); // ios::end   ios::cur
      f1.read((char*) &data, sizeof(T));
        return data;
    }

    void write(const T&data, int index){
      f1.seekp(index*sizeof(T), ios::beg);
      f1.write((char*) &data, sizeof(T));
    }

    T readNext(void){
      T data;
      f1.read((char *) & data , sizeof(T));
      return data;
    }

    void writeNext(const T& data){
      f1.write((char*) &data, sizeof(T));
    }

    void rewind(void){
      f1.seekg(0, ios::beg);
      f1.seekp(0, ios::beg);
    }
 };

struct student{
  char name[20];
  char stdno[14];
  double avg;
  friend ostream& operator<< (ostream &o1, student );
  char &operator[](const int& index);
};
int mystrlen(char *s){
    int i;
    for(i = 0; s[i]; i++);
    return i;
}

char& student::operator[](const int& index){
  if(index < mystrlen(stdno))
    return stdno[index];
  return stdno[0];
}

ostream& operator<<(ostream& o1, student m1){
  o1 << "( " << m1.name << " , " 
     << m1.stdno << " , " << 
     m1.avg << " ) ";
  return o1;
}

int main(){
  myIntArray<student> myi("temp6.in");
  student st1 {"Ali","933424",15.1};
  cout << st1[1] << endl;
  char c = '2';
  st1[1] = c; // 50 int
  myi.writeNext(st1);
  strcpy(st1.name, "Reza");
  strcpy(st1.stdno, "923434");
  st1.avg = 14.2;
  myi.writeNext(st1);
  myi.rewind();
  cout << myi.readNext() << endl;
  cout << myi.readNext() << endl;
  cout << myi.read(0) << endl;
  cout << myi.read(1) << endl;
  return 0;
}
