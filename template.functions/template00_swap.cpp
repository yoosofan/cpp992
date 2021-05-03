#include<iostrea>
using namespace std;
void swap(double&, double&);
void swap(string&, string&);
int main(){
  double ae[20] = {3, 4, 5, 6, 8, 9};
  cout << search(ae, 3, 6) << endl;
  cout << search(ae, 33, 6)  << endl;
  string am[]={"ali", "reza", "kamran", "hamid"};
  cout << search(am,"reza",4) << endl;
  return 0;
}
void swap(double& a, double& b){
  double temp = a;
  a = b;
  b = temp;
}
void swap(string&, string&){
  string temp = a;
  a = b;
  b = temp;
}
