#include <iostream>
#include <string>
using namespace std;

int main()
{ 
  string str ="hello guys";

  cout<<"1st char: "<<str[0]<<endl;
  cout<<"5th char: "<<str[4]<<endl;

  cout<<"char at index 6: "<<str.at(6)<<endl;

  return 0;
}