#include<iostream>
#include<fstream>

using namespace std;
int main(){
    fstream f1("2.out.txt");
    if(!f1){
        cout << "The file could not be opened " << endl;
        throw 1;
    }
    int i = 89; //cin>>i;
    f1 << i << " ";
    cout << i << endl; 
    i = 765;
    f1 << i;
    cout << i << endl;
    f1.close();
    return 0;
}
