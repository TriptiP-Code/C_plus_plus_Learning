#include <iostream>
using namespace std;

int main(){
  int arr[2][4]={0,1,2,3,4,5,6,7};
  cout<< arr[0][2]<<endl;
  cout<<arr[1][0]<<endl;
  arr[0][2]=22;
  cout<<arr[0][2]<<endl;
  arr[1][0]=99;
  cout<<arr[1][0];
  return 0;
}