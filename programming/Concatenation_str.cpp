#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str1="hello";
  string str2="guys";

  string result1=str1+str2;
  cout<<"catenation using + : "<<result1<<endl;

  string result2 =str1;
  result2.append(str2);
  cout<<"concatenation using append(): "<<result2<<endl;

  return 0;
}