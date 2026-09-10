#include <iostream>
using namespace std;

void change(int a )
{
  a =22;
}

int main()
{
  int x =5;
  change(x);
  cout<<x;
  return 0;
}

// in this program , when the change function is called with x as the argument a copy of x is created and passed to the function 
// Inside the function , the parameter a is modified but this modification only affects the local copy of the valye , not the original variable x , as demonstrated by the output 

