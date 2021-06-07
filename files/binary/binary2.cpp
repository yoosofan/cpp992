#include <fstream>
#include<iostream>
#include <cstdlib>
using namespace std;

void write2file(const char * fname);
void readFromFile(const char * fname);

int main(){
    write2file("a1.bin");
    readFromFile("a1.bin");
    const char * mmsst="sdfsfgfsfg";
    cout << mmsst << endl;
    return 0;
}
void write2file(const char * fname = "a1.bin")
{
    ofstream f1(fname, ios::binary);
    if( ! f1)
    {
        cout << "Cannot open f1" << endl;
        throw "Cannot Open File";
    }
    int i = 20;
    f1.write((char *) & i, sizeof(int));
    for( i = 0; i < 20; i++)
        f1.write((char *) & i, sizeof(int));
    f1.close();
}
void readFromFile(const char * fname = "a1.bin")
{
    fstream f3(fname , ios::in | ios::binary);
    if( ! f3)
    {
        cout << "Cannot open f3" << endl;
        throw "Cannot Open File";
    }
    int n, j, i;
    f3.read((char *) & n, sizeof(int));
    for(i = 0; i < n; i++)
    {
        f3.read((char *) & j, sizeof(int));
        cout << j << endl;
    }
    f3.close();
}
