#include <iostream>
using namespace std;

void f(int a =10)
{
  cout<< a<<endl;
}

int main()
{
  f();
  f(221);
  return 0;
}