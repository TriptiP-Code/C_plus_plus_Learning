#include <iostream>
using namespace std;

void change(int* a )
{
  *a=2;
}

int main (){
  int x =5;

  change(&x);
  cout<<x;
  return 0;
}

// the original value is modified , but it increases to complexity of the progrram as we need to be careful of referencing , referencing and passing addresses , so passing reference is prefered over this method 

