#include <fstream>
#include<iostream>
#include <cstdlib>
using namespace std;

class myIntArray{
    fstream f1;
    public:
    myIntArray(const char * fname = "temp1.in")
    {
        f1.open(fname, ios::in | ios::out | ios::binary);
        if( ! f1 ){
            f1.open(fname, ios::out | ios::binary);
            if( ! f1 )
            { 
                cout << "Can not open file" << endl; 
                throw "Cannot Open File";
            }
            else
            {
                f1.close(); 
                f1.open(fname, ios::in | ios::out | ios::binary);
            }
        }
    }
    ~myIntArray()
    { 
        f1.close();
    }
    int read(int index){
        int j;
        f1.seekg( index * sizeof(int), ios::beg ); // ios::end   ios::cur
        f1.read((char *) & j, sizeof(int));
        return j;
    }
    void write(int data, int index)
    {
        f1.seekp(index * sizeof(int), ios::beg);
        f1.write((char *) & data , sizeof(int));
    }
    int readNext(void)
    {
        int j;
        f1.read((char *) & j, sizeof(int));
        return j;
    }
    void writeNext(int j)
    {
        f1.write((char *) & j, sizeof(int));
        f1.flush();
    }
    void rewind(void)
    { 
        f1.seekg(0, ios::beg);
        f1.seekp(0, ios::beg);
    }
};
int main(){
    myIntArray myi;
    myi.writeNext(12);
    myi.writeNext(14);
    myi.rewind();
    cout << myi.readNext() << endl;
    cout << myi.readNext() << endl;
    cout << myi.read(0) << endl;
    cout << myi.read(1) << endl;
    myi.write(54,10);
    //cout<<myi.read(25)<<endl<<endl;
    return 0;
}
//void *
//char *
//int ff3(void * hh);
//int ff4(char * hh);
