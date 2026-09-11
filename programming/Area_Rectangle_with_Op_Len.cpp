#include <iostream>
using namespace std;

double calcArea(double l , double h=10.0){
  return l*h;
}

int main(){
  cout<<"area 1 :"<<calcArea(5)<<endl;
  cout<<"Area 2 : "<<calcArea(5.9); 
  return 0;
}