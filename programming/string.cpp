#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str="hello everyone";
  cout<<"using index: ";
  for (int i=0;i<str.size();i++)
  {
    cout<<str[i];
  }
  cout<<endl;
  cout<<"using range based for loop: ";
  for(char ch : str)
  {
    cout<<ch;
  }
  cout<<endl;

  cout<<"using iterator: ";
  for(auto it =str.begin(); it != str.end() ; it++){
    cout<<*it;
  }
  cout<<endl;
  return 0;
}