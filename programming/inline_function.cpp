#include <iostream>
using namespace std;

inline int getSum( int a , int b){
  return a+b;
}

int main()
{
  int num1=5 , num2 =10;

  int result =getSum(num1 , num2);
  cout<<"sum:"<<result <<endl;
  return 0;
}

// the getSum() function is declared using the inline keyword , the compiler may replace the function call with its body during compilation , potentially reducing function overhead 