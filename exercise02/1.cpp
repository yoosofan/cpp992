// mohamadian

#include <iostream>
#include <cstdlib>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;

 main()
{
    menu();
    return 0;
}

}
 int func2(void);
 {

          cout<<"triangular\n";
          cout<<"Enter (a,b,c) \n";
     cin<<a ,b,c;
      cout<<"(a,b,b):"<< a,b,c;


      int a,b;
     cout<<"first dot";
         cout<<"Enter (a,b) \n";
       cin<<a ,b;
       cout<<(" (a,b)";
 int x,y;
   cout<<"second dot";
         cout<<"Enter (x,y) \n";
       cin<<("x ,y);
       cout<<" (x,y) ";

       int c,d;
   cout<<"third dot";
         cout<<"Enter (c,d) \n";
       cin<<c ,d;
       cout<<" (c,d) ";

    int p,q,s,l,k,j,m,t,r,e,z;

    p= pow(x-a,2);
     q=pow(y-b,2);
     s= p + q;
    w = sqrt(s);

      l= pow(x-c,2);
     k=pow(y-d,2);
     j= p + q;
    m= sqrt(j);

     t= pow(c-a,2);
     r=pow(d-b,2);
     e= p + q;
    z = sqrt(e);

    if( w+z>m){
               if(z+m>w)}
               {
                       if( w+m>z){
                        cout<<" correct ";
                       }

          }
}
 else {
            return;
          }

     func3(int z ,int m ,int w);

     }

      func3(int z ,int m ,int w){


      int mohit;
      mohit = z+m+w;

      cout<<" mohit mosalas: ";
       cout<<mohit;



      }

 int func1(int x,int y);
 {

 int x,y,dx,dy;
  int x,y;
   cout<<"second dot";
         cout<<"Enter (x,y) \n";
       cin<<("x ,y);
       coucout<<" (c,d) ";t<<" (x,y) ";
 cout<<"changing to : x ,y";
    scanf("%d, %d", &dx ,&dy);
     x= x+ dx;
     y= y+ dy;
   cout<<"final move: (x,y)   \n";


}

void menu(void) {



    cout<<"choose what to do:\n";
     cout<<"1-changing func";
    cout<<"2-mosalas";


    int t;
    cin<<t;
    switch (t) {
        case 1:
            func1(int x,int y);
            break;
        case 2:
            func2(int a,int b,int x,int y);

        default;
    }
    menu();
}


/*
exercise02$ g++ 1.cpp
1.cpp:35:14: warning: missing terminating " character
   35 |        cin<<("x ,y);
      |              ^
1.cpp:35:14: error: missing terminating " character
   35 |        cin<<("x ,y);
      |              ^~~~~~~
1.cpp:98:14: warning: missing terminating " character
   98 |        cin<<("x ,y);
      |              ^
1.cpp:98:14: error: missing terminating " character
   98 |        cin<<("x ,y);
      |              ^~~~~~~
1.cpp:11:7: warning: ISO C++ forbids declaration of ‘main’ with no type [-Wreturn-type]
   11 |  main()
      |       ^
1.cpp: In function ‘int main()’:
1.cpp:13:5: error: ‘menu’ was not declared in this scope
   13 |     menu();
      |     ^~~~
1.cpp: At global scope:
1.cpp:17:1: error: expected declaration before ‘}’ token
   17 | }
      | ^
1.cpp:19:2: error: expected unqualified-id before ‘{’ token
   19 |  {
      |  ^
1.cpp:70:2: error: expected unqualified-id before ‘else’
   70 |  else {
      |  ^~~~
1.cpp:74:32: error: expected constructor, destructor, or type conversion before ‘;’ token
   74 |      func3(int z ,int m ,int w);
      |                                ^
1.cpp:76:6: error: expected declaration before ‘}’ token
   76 |      }
      |      ^
1.cpp:78:32: error: ISO C++ forbids declaration of ‘func3’ with no type [-fpermissive]
   78 |       func3(int z ,int m ,int w){
      |                                ^
1.cpp: In function ‘int func3(int, int, int)’:
1.cpp:89:7: warning: no return statement in function returning non-void [-Wreturn-type]
   89 |       }
      |       ^
1.cpp: At global scope:
1.cpp:92:2: error: expected unqualified-id before ‘{’ token
   92 |  {
      |  ^
1.cpp: In function ‘void menu()’:
1.cpp:119:8: error: no match for ‘operator<<’ (operand types are ‘std::istream’ {aka ‘std::basic_istream<char>’} and ‘int’)
  119 |     cin<<t;
      |     ~~~^~~
      |     |    |
      |     |    int
      |     std::istream {aka std::basic_istream<char>}
1.cpp:119:8: note: candidate: ‘operator<<(int, int)’ <built-in>
  119 |     cin<<t;
      |     ~~~^~~
1.cpp:119:8: note:   no known conversion for argument 1 from ‘std::istream’ {aka ‘std::basic_istream<char>’} to ‘int’
In file included from /usr/include/c++/9/string:55,
                 from /usr/include/c++/9/bits/locale_classes.h:40,
                 from /usr/include/c++/9/bits/ios_base.h:41,
                 from /usr/include/c++/9/ios:42,
                 from /usr/include/c++/9/ostream:38,
                 from /usr/include/c++/9/iostream:39,
                 from 1.cpp:3:
/usr/include/c++/9/bits/basic_string.h:6416:5: note: candidate: ‘template<class _CharT, class _Traits, class _Alloc> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)’
 6416 |     operator<<(basic_ostream<_CharT, _Traits>& __os,
      |     ^~~~~~~~
/usr/include/c++/9/bits/basic_string.h:6416:5: note:   template argument deduction/substitution failed:
1.cpp:119:10: note:   ‘std::istream’ {aka ‘std::basic_istream<char>’} is not derived from ‘std::basic_ostream<_CharT, _Traits>’
  119 |     cin<<t;
      |          ^
In file included from /usr/include/c++/9/bits/ios_base.h:46,
                 from /usr/include/c++/9/ios:42,
                 from /usr/include/c++/9/ostream:38,
                 from /usr/include/c++/9/iostream:39,
                 from 1.cpp:3:
/usr/include/c++/9/system_error:217:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const std::error_code&)’
  217 |     operator<<(basic_ostream<_CharT, _Traits>& __os, const error_code& __e)
      |     ^~~~~~~~
/usr/include/c++/9/system_error:217:5: note:   template argument deduction/substitution failed:
1.cpp:119:10: note:   ‘std::istream’ {aka ‘std::basic_istream<char>’} is not derived from ‘std::basic_ostream<_CharT, _Traits>’
  119 |     cin<<t;
      |          ^
In file included from /usr/include/c++/9/iostream:39,
                 from 1.cpp:3:
/usr/include/c++/9/ostream:506:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, _CharT)’
  506 |     operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
      |     ^~~~~~~~
/usr/include/c++/9/ostream:506:5: note:   template argument deduction/substitution failed:
1.cpp:119:10: note:   ‘std::istream’ {aka ‘std::basic_istream<char>’} is not derived from ‘std::basic_ostream<_CharT, _Traits>’
  119 |     cin<<t;
      |          ^
In file included from /usr/include/c++/9/iostream:39,
                 from 1.cpp:3:
/usr/include/c++/9/ostream:511:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, char)’
  511 |     operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
      |     ^~~~~~~~
/usr/include/c++/9/ostream:511:5: note:   template argument deduction/substitution failed:
1.cpp:119:10: note:   ‘std::istream’ {aka ‘std::basic_istream<char>’} is not derived from ‘std::basic_ostream<_CharT, _Traits>’
  119 |     cin<<t;
      |          ^
In file included from /usr/include/c++/9/iostream:39,
                 from 1.cpp:3:
/usr/include/c++/9/ostream:517:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, char)’
  517 |     operator<<(basic_ostream<char, _Traits>& __out, char __c)
      |     ^~~~~~~~
/usr/include/c++/9/ostream:517:5: note:   template argument deduction/substitution failed:
1.cpp:119:10: note:   ‘std::istream’ {aka ‘std::basic_istream<char>’} is not derived from ‘std::basic_ostream<char, _Traits>’
  119 |     cin<<t;
      |          ^
In file included from /usr/include/c++/9/iostream:39,
                 from 1.cpp:3:
/usr/include/c++/9/ostream:523:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, signed char)’
  523 |     operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
      |     ^~~~~~~~
/usr/include/c++/9/ostream:523:5: note:   template argument deduction/substitution failed:
1.cpp:119:10: note:   ‘std::istream’ {aka ‘std::basic_istream<char>’} is not derived from ‘std::basic_ostream<char, _Traits>’
  119 |     cin<<t;
      |          ^
In file included from /usr/include/c++/9/iostream:39,
                 from 1.cpp:3:
/usr/include/c++/9/ostream:528:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, unsigned char)’
  528 |     operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
      |     ^~~~~~~~
/usr/include/c++/9/ostream:528:5: note:   template argument deduction/substitution failed:
1.cpp:119:10: note:   ‘std::istream’ {aka ‘std::basic_istream<char>’} is not derived from ‘std::basic_ostream<char, _Traits>’
  119 |     cin<<t;
      |          ^
In file included from /usr/include/c++/9/iostream:39,
                 from 1.cpp:3:
/usr/include/c++/9/ostream:548:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const _CharT*)’
  548 |     operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
      |     ^~~~~~~~
/usr/include/c++/9/ostream:548:5: note:   template argument deduction/substitution failed:
1.cpp:119:10: note:   ‘std::istream’ {aka ‘std::basic_istream<char>’} is not derived from ‘std::basic_ostream<_CharT, _Traits>’
  119 |     cin<<t;
      |          ^
In file included from /usr/include/c++/9/ostream:702,
                 from /usr/include/c++/9/iostream:39,
                 from 1.cpp:3:
/usr/include/c++/9/bits/ostream.tcc:321:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const char*)’
  321 |     operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
      |     ^~~~~~~~
/usr/include/c++/9/bits/ostream.tcc:321:5: note:   template argument deduction/substitution failed:
1.cpp:119:10: note:   ‘std::istream’ {aka ‘std::basic_istream<char>’} is not derived from ‘std::basic_ostream<_CharT, _Traits>’
  119 |     cin<<t;
      |          ^
In file included from /usr/include/c++/9/iostream:39,
                 from 1.cpp:3:
/usr/include/c++/9/ostream:565:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, const char*)’
  565 |     operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
      |     ^~~~~~~~
/usr/include/c++/9/ostream:565:5: note:   template argument deduction/substitution failed:
1.cpp:119:10: note:   ‘std::istream’ {aka ‘std::basic_istream<char>’} is not derived from ‘std::basic_ostream<char, _Traits>’
  119 |     cin<<t;
      |          ^
In file included from /usr/include/c++/9/iostream:39,
                 from 1.cpp:3:
/usr/include/c++/9/ostream:578:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, const signed char*)’
  578 |     operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
      |     ^~~~~~~~
/usr/include/c++/9/ostream:578:5: note:   template argument deduction/substitution failed:
1.cpp:119:10: note:   ‘std::istream’ {aka ‘std::basic_istream<char>’} is not derived from ‘std::basic_ostream<char, _Traits>’
  119 |     cin<<t;
      |          ^
In file included from /usr/include/c++/9/iostream:39,
                 from 1.cpp:3:
/usr/include/c++/9/ostream:583:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, const unsigned char*)’
  583 |     operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
      |     ^~~~~~~~
/usr/include/c++/9/ostream:583:5: note:   template argument deduction/substitution failed:
1.cpp:119:10: note:   ‘std::istream’ {aka ‘std::basic_istream<char>’} is not derived from ‘std::basic_ostream<char, _Traits>’
  119 |     cin<<t;
      |          ^
In file included from /usr/include/c++/9/iostream:39,
                 from 1.cpp:3:
/usr/include/c++/9/ostream:691:5: note: candidate: ‘template<class _Ostream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_ostream<_Ostream>, std::__is_insertable<typename std::__is_convertible_to_basic_ostream<_Tp>::__ostream_type, const _Tp&, void> >::value, typename std::__is_convertible_to_basic_ostream<_Tp>::__ostream_type>::type std::operator<<(_Ostream&&, const _Tp&)’
  691 |     operator<<(_Ostream&& __os, const _Tp& __x)
      |     ^~~~~~~~
/usr/include/c++/9/ostream:691:5: note:   template argument deduction/substitution failed:
/usr/include/c++/9/ostream: In substitution of ‘template<class _Ostream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_ostream<_Ostream>, std::__is_insertable<typename std::__is_convertible_to_basic_ostream<_Tp>::__ostream_type, const _Tp&, void> >::value, typename std::__is_convertible_to_basic_ostream<_Tp>::__ostream_type>::type std::operator<<(_Ostream&&, const _Tp&) [with _Ostream = std::basic_istream<char>&; _Tp = int]’:
1.cpp:119:10:   required from here
/usr/include/c++/9/ostream:691:5: error: no type named ‘type’ in ‘struct std::enable_if<false, void>’
1.cpp:122:19: error: expected primary-expression before ‘int’
  122 |             func1(int x,int y);
      |                   ^~~
1.cpp:122:25: error: expected primary-expression before ‘int’
  122 |             func1(int x,int y);
      |                         ^~~
1.cpp:125:19: error: expected primary-expression before ‘int’
  125 |             func2(int a,int b,int x,int y);
      |                   ^~~
1.cpp:125:25: error: expected primary-expression before ‘int’
  125 |             func2(int a,int b,int x,int y);
      |                         ^~~
1.cpp:125:31: error: expected primary-expression before ‘int’
  125 |             func2(int a,int b,int x,int y);
      |                               ^~~
1.cpp:125:37: error: expected primary-expression before ‘int’
  125 |             func2(int a,int b,int x,int y);
      |                                     ^~~
1.cpp:127:16: error: expected ‘:’ before ‘;’ token
  127 |         default;
      |                ^
      |                :
exercise02$ 

*/
