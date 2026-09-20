#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str="hello guys";

  string sub1=str.substr(0,5);
  cout<<"substring 1: "<<sub1 <<endl;

  string sub2=str.substr(6,5);
  cout<<"substring 2: "<<sub2 <<endl;

  return 0;
}