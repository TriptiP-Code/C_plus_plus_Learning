#include <iostream>
using namespace std;

int main(){
string s;
cout<<"enter name"<<endl;
cin>>s;
cout<<"the name is "<<s;
  return 0;
}

// the output is 
// enter name
// tripti pandey
// the name is tripti
// the space tells that input is over

// instead use getline() to take complete statement input

// example

// #include <iostream>
// using namespace std;

// int main() {
//     string statement;
//     getline(cin, statement);

//     cout << statement;

//     return 0;
// }