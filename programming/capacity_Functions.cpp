#include <iostream>
#include <string>

using namespace std;

int main()

{
  string str ="eyeforeye is for humans";

  cout<<"the initial string is : ";
  cout<<str<<endl;

  str.resize(13);

  cout<<"the string after resize operation is : ";
  cout<<str<<endl;

  cout<<"the string resize operation is : ";
  cout<<str<<endl; 

  cout<<"the capapcity after resize operation is : ";
  cout<<str<<endl;

  cout<<" the capacity of string is : ";
  cout<<str.capacity()<<endl;

  cout<<"the length of the strinh is :"<<str.length()<<endl ;

  str.shrink_to_fit();

  cout<<"the new capacity after shrinking is : ";

  cout<<str.capacity()<<endl;


  return 0;
}