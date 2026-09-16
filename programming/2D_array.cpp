#include <iostream>
using namespace std;

int main()
{
  int matrix[3][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
  };

  for (int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}


int matrix[3][4] declares a 2d array with 3 rows and 4 coloums 
the array is initialized using nested braces for each row 

we use 2 nested for loops to access and print each element : the outer loop for rows and the inner loop for coloumns 

matrix[i][j] accesse the element at the i -th row and j-th coloumn 

