#include <iostream>
using namespace std;

int main(){
  int arr[5]={2,4,8,12,16};
  for (int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}

// explanation :

// int arr[5] declares an array of 5 integers 

// the elemets are initialized with {2,4,8,12,16}

// the loop is used to iterateover the array and print each element 

// array indicies in c++ start from 0 , so arr[0] refers to the 1st lement , and arr[4] refers to the last one in this case

