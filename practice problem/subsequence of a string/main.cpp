#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int i,j,n,limit;
  string str, subSequence;
  cout<<"Enter the String: ";
  cin>>str;

  n = str.length();
  limit = pow(2,n)-1;

  for ( i = 0; i< limit; i++)
  {
    subSequence = "";
    for ( j = 0; j < n; j++)
    {
      int num = i & (1<<j);
      if (num)
      {
        subSequence += str[j];
      }
    }
    cout<<subSequence<<endl;
  }
  return 0;
}