#include <iostream>
#include <string>

using namespace std;

int main()

{
  string str="hello guys";

  str.push_back('!');
  cout<<"after push_back : "<<str<<endl;

  str.pop_back();
  cout<<"after pop_back : "<<str<<endl;

  str.insert(5,"c++");
  cout<<"after insert : "<<str<<endl;

  str.erase(5,4);
  cout<<"after erase : "<<str<<endl;

  return 0;
}