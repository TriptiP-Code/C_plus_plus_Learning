#include <iostream>
#include <string>
using namespace std;

int main()

{
  string str;
  getline(cin,str);

  cout<<"the initial string is : ";
  cout<<str <<endl;

  str.push_back('s');

  cout<<"the string after push_back operation is : ";

  cout<<str<<endl;

  str.pop_back();

  cout<<"the string after pop_back operation is : ";

  cout<<str<<endl;
  
  return 0;
}