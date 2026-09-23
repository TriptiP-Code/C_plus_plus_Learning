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

// here getline()  reads the complete line push_back() adds a character to the end and pop_back()  removes the last character 

// time complexity: O(1)
// Space complexity: o(n) where n is the size of string

