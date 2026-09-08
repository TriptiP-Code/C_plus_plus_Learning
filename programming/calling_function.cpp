#include <iostream>
using namespace std;

void greet()
{
  cout<<"welcome to c++ programming"<<endl;
}
int multiply(int a , int b)
{
  return a*b;
}

int main()
{
  greet();
  int result =multiply (4,5);
  cout<<"multiplication result is : "<<result <<endl;
  return 0;
}