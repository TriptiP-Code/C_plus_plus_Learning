#include <iostream>
#include <vector>
using namespace std;

int main()
{

  int arr[]={1,2,3,4,5};
  cout<<"iterating by value"<<endl;
  for (auto it :arr)
  {
    cout<<it<<" ";

  }
  cout <<endl;

  cout<<"iterating with reference"<<endl;
  for(auto &it :arr)
  {
    cout<<it<<" ";
  }
  cout<<endl;
  return 0;
}