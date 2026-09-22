#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str ="hello gys";
  size_t pos =str.find("gys");

  if(pos < str.size())
  {
    cout<<" \"guys\" found at index:"<<pos<<endl;
    
  }

  return 0;
}