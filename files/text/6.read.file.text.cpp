#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
    fstream f1("input.integers.txt");
    if(!f1){
        cout << "The file could not be opened " << endl;
        exit(0);
    }
    int i; //cin>>i;
    f1 >> i;
    cout << i << endl;
    f1 >> i;
    cout << i << endl;
    f1.close();
    return 0;
}
