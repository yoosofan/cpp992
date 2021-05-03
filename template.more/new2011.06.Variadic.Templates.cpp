//http://en.cppreference.com/w/cpp/language/parameter_pack
#include <iostream>
using namespace std;

void tprintf(const char* format){ // base function
  cout << format;
}

template<typename T, typename... Targs>
void tprintf(const char* format, T value, Targs... Fargs){ // recursive variadic function
    for ( ; *format != '\0'; format++ ) {
        if ( *format == '%' ) {
           cout << value;
           tprintf(format+1, Fargs...); // recursive call
           return;
        }
        cout << *format;
    }
}

int main(){
  tprintf("% world% %\n", "Hello", '!', 123);    
  return 0;
}
