#include <iostream>
using namespace std;

void printHello(int n){
  if (n ==0) return;
  cout<<"hello"<<endl;
  printHello(n-1);
}

int main()
{
  printHello(5);
  return 0;
}

// this demonstrates a simple recursive function that prints hello multiple times 
// the function calls itself with a smaller vvalue of n until the base case n ==0 is reached 
// each recursive call prints "hello" ince resulting in the message neing printed 5 times