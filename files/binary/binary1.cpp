#include <fstream>
#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
    int i=12;
    ofstream f1("a1.txt", ios::binary);
    if(!f1){
        cout << "Can not open f1"<<endl;
        throw "Cannot Open File";
    }
    f1.write((char *) & i, sizeof(int));
    const char *st1="ABC"; //{'A', 'B', 'C', '\0'} {65, 66, 67, 0} {0x41, 0x42, 0x43, 0x0}
    const char st2[]{'A', 'B', 'C', '\0'};// {65, 66, 67, 0} {0x41, 0x42, 0x43, 0x0}
    const char st3[]{65, 66, 67, 0}; //{0x41, 0x42, 0x43, 0x0}
    const char st4[]{0x41, 0x42, 0x43, 0x0};
    f1.write((char *)st1, 4 * sizeof(char));
    f1.write((char *)st2, 4 * sizeof(char));
    f1.write((char *)st3, 4 * sizeof(char));
    f1.write((char *)st4, 4 * sizeof(char));
    f1.write((char *) & (++i), sizeof(int));
    // f1.write((char *) & (i++),sizeof(int));
    // f1.write((char *)&(i+1),sizeof(int));
    f1.write((char *) & (++i), sizeof(int));
    f1.write((char *) & (i+=234234), sizeof(int));
    f1.close();
    fstream f3("a1.txt", ios::in | ios::binary);
    if(!f3){
        cout <<"Can not open f3"<<endl; 
        throw "Cannot Open File";
    }
    int j;
    f3.read((char *)&j,sizeof(int));
    char ast[20];
    f3.read(ast , 4 * sizeof(char));
    f3.read(ast , 4 * sizeof(char));
    f3.read(ast , 4 * sizeof(char));
    f3.read(ast , 4 * sizeof(char));
    cout << j << endl;
    cout << ast << endl;
    cout << "number of read character: "
      << f3.read((char *) & j, sizeof(int)).gcount() << endl;
    while(f3.read((char *) & j, sizeof(int)))
        cout << j << endl;
    f3.close();
    return 0;
}
