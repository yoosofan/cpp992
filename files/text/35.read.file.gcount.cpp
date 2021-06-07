#include<fstream>
#include<iostream>
using namespace std;

int main(){
    char st[200];
    ifstream f1("input.students.txt");
    if(! f1){
        cout << "couldn't open" << endl;
        return 0;
    }
    //cout<<f1.getline(st,200).gcount()<<endl;
    while(f1.getline(st, 200).gcount() > 0 )    
        cout << st << endl;
    //while(f1.getline(st,200)>0)    cout<<st<<endl;
  f1.close();
  // int i=18;  cout << endl;  cout << hex << i ;  cout << endl;
  return 0;
}
