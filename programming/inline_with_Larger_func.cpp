#include <iostream>
using namespace std;

inline void displayMessage()
{
  for (int i=0; i<5;i++)
  cout<<"hello" <<i<<endl;
}

int main()
{
  displayMessage();
  return 0;
}

// the function contains a loop and performs multiple operations , although it is declared inline , the compiler may decide not to inline it , the inline keyword does not force code expansion  

