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

// in this program , the function f has a default argument a=10 , so when no argument is provided a defaults to 10 which is printed . 
// when 221 is passed , a becomes 221 which is then printed  