#include <iostream>
using namespace std;

int main() {
  int a; // declaration
  a = 12; // initialization

  cout<<"Size of int "<<sizeof(a)<<endl;

  float b;
  cout<<"Size of float "<<sizeof(b)<<endl;
  
  char c;
  cout<<"Size of char "<<sizeof(c)<<endl; 

  bool d;
  cout<<"Size of boolean "<<sizeof(d)<<endl;

  short int si;
  long int li;

  cout<<"size of Shortint "<<sizeof(si)<<endl;
  cout<<"size of longint "<<sizeof(li)<<endl;

  return 0;
}
