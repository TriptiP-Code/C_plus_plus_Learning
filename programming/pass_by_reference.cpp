#include <iostream>

using namespace std;

void change(int& a)
{
  a=2;
}

int main()
{
  int x=5;
  change (x);
  cout <<x;
  return 0;
}

// the original value is modified , just declaring the parameter a as a reference changes it from pass by value to pass by reference 

