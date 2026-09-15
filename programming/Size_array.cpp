#include <iostream>
using namespace std;

int main(){
  char arr[]={'a','b','c','d','f'};
  cout<<"size of arr[0]: "<<sizeof(arr[0])<<endl;

  cout<<"size of arr: " <<sizeof(arr)<<endl;

  int n=sizeof(arr)/sizeof(arr[0]);

  cout<<"length of an array : "<<n<<endl;

  return 0;
}