#include<fstream>
#include<iostream>
using namespace std;

int main(){
    char st[200];
    ifstream f1("input.students.txt");
    if( ! f1 )
        cout << "couldn't open" << endl;
    else {
        f1.getline(st, 199); // 199 charactes + \0 
        while(! f1.eof()){
            cout << st << endl;
            f1.getline(st, 199);
        }
        f1.close();
    }
    return 0;
}
